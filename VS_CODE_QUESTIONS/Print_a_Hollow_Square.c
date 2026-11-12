/* Problem statement: Given n, print an n-by-n hollow square. Print an asterisk on the first row, last row, first column, or last
column. Print a space inside.
Input format: One integer n (1 ≤ n ≤ 20).
Output format: Print n lines of width n; interior positions are spaces. */


#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
