/* Problem statement: Given n, print a centered pyramid with n rows. Row i contains 2i - 1 asterisks, preceded by enough
spaces to center it.
Input format: One integer n (1 ≤ n ≤ 20).
Output format: Print n lines of leading spaces followed by an odd number of asterisks. */


#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
