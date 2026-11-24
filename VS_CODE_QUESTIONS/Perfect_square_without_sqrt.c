/* Problem statement: Return 1 if a non-negative integer is a perfect square, otherwise 0. Do not use floating-point square root.
Input format: n
Output format: 1 or 0.
Constraints: Use sensible bounds for the chosen C data types. Unless the official platform specifies otherwise, test boundary cases
and avoid assuming inputs are always positive unless stated. */

#include <stdio.h>
int isPerfectSquare(long long n)
{
    if (n < 0)
        return 0;

    for (long long i = 0; i * i <= n; i++)
    {
        if (i * i == n)
            return 1;
    }

    return 0;
}

int main()
{
    long long n;
    scanf("%lld", &n);
    printf("%d\n", isPerfectSquare(n));

    return 0;
}
