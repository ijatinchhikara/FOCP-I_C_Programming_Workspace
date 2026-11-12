/* Problem statement: Given n, print n rows. On row i, print integers from 1 through i, separated by one space.
Input format: One integer n (1 ≤ n ≤ 20).
Output format: Print n lines with numbers separated by one space and no trailing spaces.  */


#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
