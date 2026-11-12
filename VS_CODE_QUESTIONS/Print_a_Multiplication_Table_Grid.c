/*Problem statement: Given n, print an n-by-n multiplication grid. At row i and column j, print i multiplied by j. Separate
values with one space.
Input format: One integer n (1 ≤ n ≤ 12).
Output format: Print n lines, each containing n products separated by one space.*/


#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d", i * j);
            if (j < n) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
