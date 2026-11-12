/* Problem statement: Given n, print a right-aligned triangle. Row 1 has one asterisk and row n has n asterisks. Use
leading spaces to align the right edges.
Input format: One integer n (1 ≤ n ≤ 20).
Output format: Print n lines. Leading spaces are required; do not add trailing spaces.  */

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
