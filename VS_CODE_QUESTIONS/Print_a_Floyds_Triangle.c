/* Problem statement: Given n, print Floyd's triangle with n rows. Fill it with consecutive positive integers starting at 1,
placing one number on row 1, two on row 2, and so on.
Input format: One integer n (1 ≤ n ≤ 20).
Output format: Print n lines with numbers separated by one space. */


#include <stdio.h>
int main() {
    int n;
    int num = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", num);
            if (j < i) {
                printf(" ");
            }
            num++;
        }
        printf("\n");
    }
    return 0;
}
