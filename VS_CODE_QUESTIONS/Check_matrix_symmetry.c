/* Problem statement: For a square matrix, test whether matrix[i][j] equals matrix[j][i] for all i,j.
Input format: n then n x n matrix
Output format: YES or NO */

#include <stdio.h>
int main() {
    int n, i, j;
    int a[100][100];
    int symmetric = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (symmetric == 0) {
            break;
        }
    }
    if (symmetric == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
