/* Problem statement: Count index pairs i<j whose values have equal digit sums.
Input format: n, then n positive integers
Output format: Pair count */

#include <stdio.h>
int digitSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main()
{
    int n, count = 0;
    int arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (digitSum(arr[i]) == digitSum(arr[j]))
            {
                count++;
            }
        }
    }
    printf("%d\n", count);

    return 0;
}
