/* Problem statement: List triples 1<=a<b<c<=N satisfying a²+b²=c², ordered by a then b then c. Print None if absent.
Input format: N
Output format: One triple per line, or None */

#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for (int a = 1; a <= n; a++)
    {
        for (int b = a + 1; b <= n; b++)
        {
            for (int c = b + 1; c <= n; c++)
            {
                if (a * a + b * b == c * c)
                {
                    printf("%d %d %d\n", a, b, c);
                    count++;
                }
            }
        }
    }
    if (count == 0)
    {
        printf("None\n");
    }

    return 0;
}
