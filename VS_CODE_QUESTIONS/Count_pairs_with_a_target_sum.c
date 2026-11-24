/* Problem statement: Read n values and count index pairs i<j whose values sum to target.
Input format: n target, then n integers
Output format: Number of pairs */

#include <stdio.h>
int main()
{
    int n, target;
    int arr[1000];
    int count = 0;
    scanf("%d %d", &n, &target);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);

    return 0;
}
