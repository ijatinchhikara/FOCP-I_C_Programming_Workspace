/* Problem statement: Given an odd integer n, print a butterfly made of asterisks. The top half widens row by row and the
lower half mirrors it. Use spaces between the left and right wings.
Input format: One odd integer n (3 ≤ n ≤ 19).
Output format: Print n lines. Each line contains left and right wings with a central gap. */


#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int mid = (n + 1) / 2;
    // Upper half
    for (int i = 1; i <= mid; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int j = 1; j <= 2 * (mid - i) + 1; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower half
    for (int i = mid - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int j = 1; j <= 2 * (mid - i) + 1; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
