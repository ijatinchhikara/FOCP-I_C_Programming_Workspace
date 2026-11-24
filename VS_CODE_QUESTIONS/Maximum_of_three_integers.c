/* Problem statement: Write `int maxOfThree(int a, int b, int c)` and return the largest value.
Input format: Three integers a, b, c.
Output format: Largest integer.
Constraints: Use sensible bounds for the chosen C data types. Unless the official platform specifies otherwise, test boundary cases
and avoid assuming inputs are always positive unless stated */

#include <stdio.h>
int maxOfThree(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", maxOfThree(a, b, c));

    return 0;
}
