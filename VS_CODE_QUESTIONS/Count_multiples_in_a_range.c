/* Problem statement: Write `countMultiples(n,k)` to count positive integers from 1 through n divisible by positive k.
Input format: n k
Output format: Count of multiples.
Constraints: Use sensible bounds for the chosen C data types. Unless the official platform specifies otherwise, test boundary cases
and avoid assuming inputs are always positive unless stated. */

#include <stdio.h>
int countMultiples(int n, int k)
{
    if (n <= 0 || k <= 0)
        return 0;

    return n / k;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", countMultiples(n, k));

    return 0;
}
