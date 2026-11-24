/* Problem statement: Find the length of the longest contiguous strictly increasing subarray.
Input format: n, then n integers
Output format: Maximum run length */

#include <stdio.h>
int main() {
    int n, i;
    int a[1000];
    int current = 1, best = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            current++;
        } else {
            current = 1;
        }
        if (current > best) {
            best = current;
        }
    }
    printf("%d\n", best);

    return 0;
}
