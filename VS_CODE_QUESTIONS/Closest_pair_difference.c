/* Problem statement: Find the minimum absolute difference between any two distinct input values using nested loops.
Input format: n, then n distinct integers
Output format: Minimum difference */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    int a[1000];
    long long minDiff, diff;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    minDiff = 9223372036854775807LL;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            diff = llabs((long long)a[i] - a[j]);
            if (diff < minDiff) {
                minDiff = diff;
            }
        }
    }
    printf("%lld\n", minDiff);

    return 0;
}
