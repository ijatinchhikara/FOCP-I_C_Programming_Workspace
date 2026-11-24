/* Problem statement: Count x in [1,m] for which gcd(x,n)=1. Use a gcd helper function.
Input format: n m
Output format: Count */

#include <stdio.h>
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int n, m, count = 0;
    scanf("%d %d", &n, &m);
    for (int x = 1; x <= m; x++)
    {
        if (gcd(x, n) == 1)
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
