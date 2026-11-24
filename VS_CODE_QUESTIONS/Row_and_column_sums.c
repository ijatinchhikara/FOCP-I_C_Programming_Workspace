/* Problem statement: Print all row sums on line one and column sums on line two.
Input format: r c then r x c matrix
Output format: Row sums then column sums */

#include <stdio.h>
int main() {
    int r, c, i, j;
    int a[100][100];
    long long sum;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        sum = 0;
        for (j = 0; j < c; j++) {
            sum += a[i][j];
        }
        printf("%lld ", sum);
    }
    printf("\n");

    for (j = 0; j < c; j++) {
        sum = 0;
        for (i = 0; i < r; i++) {
            sum += a[i][j];
        }
        printf("%lld ", sum);
    }
    printf("\n");
    return 0;
}
