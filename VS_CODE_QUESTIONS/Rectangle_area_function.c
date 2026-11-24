/* Problem statement: Write a function that returns the area of a rectangle from length and width; print the return value in main.
Input format: length width
Output format: Area.
Constraints: Use sensible bounds for the chosen C data types. Unless the official platform specifies otherwise, test boundary cases
and avoid assuming inputs are always positive unless stated. */

#include <stdio.h>
long long rectangleArea(long long length, long long width)
{
    if (length <= 0 || width <= 0)
        return 0;

    return length * width;
}

int main()
{
    long long length, width;
    scanf("%lld %lld", &length, &width);
    printf("%lld\n", rectangleArea(length, width));

    return 0;
}
