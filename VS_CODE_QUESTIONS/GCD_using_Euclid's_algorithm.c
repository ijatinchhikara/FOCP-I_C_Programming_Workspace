/* Problem statement: Implement `gcd(a,b)` and print the greatest common divisor. Inputs are not both zero.
Input format: a b
Output format: GCD.
Constraints: Use sensible bounds for the chosen C data types. Unless the official platform specifies otherwise, test boundary cases
and avoid assuming inputs are always positive unless stated. */

#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
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
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));

    return 0;
}
