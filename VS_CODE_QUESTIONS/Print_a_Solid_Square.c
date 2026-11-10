/*Problem statement: Given a positive integer n, print a square containing n rows and n columns of asterisks (*). Do not
print spaces between asterisks.
Input format: One integer n (1 ≤ n ≤ 20).
Output format: Print n lines, each containing exactly n asterisks.*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}