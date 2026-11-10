/*Problem statement: Given n, print a left-aligned triangle. Row i must contain exactly i asterisks, for i from 1 to n.
Input format: One integer n (1 ≤ n ≤ 20).
Output format: Print n lines. Line i contains i asterisks  */


#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
