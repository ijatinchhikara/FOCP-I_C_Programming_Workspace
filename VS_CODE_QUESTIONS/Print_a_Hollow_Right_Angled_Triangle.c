/*Problem statement: Given n, print the outline of a left-aligned right-angled triangle. Print asterisks in the first column, on
the diagonal boundary, and across the final row. Print spaces inside.
Input format: One integer n (1 ≤ n ≤ 20).
Output format: Print n lines. Preserve interior spaces; the final row contains n asterisks.*/


#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
