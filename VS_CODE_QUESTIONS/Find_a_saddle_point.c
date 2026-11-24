/* Problem statement: Find a cell that is minimum in its row and maximum in its column. Print first row-major match as row col value,
Input format: r c then matrix
Output format: Coordinates and value, or None */
#include <stdio.h>
#include <limits.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int minRow = 1;
            int maxCol = 1;
            // Check minimum in row
            for (int k = 0; k < c; k++) {
                if (a[i][j] > a[i][k]) {
                    minRow = 0;
                    break;
                }
            }
            for (int k = 0; k < r; k++) {
                if (a[i][j] < a[k][j]) {
                    maxCol = 0;
                    break;
                }
            }
            if (minRow && maxCol) {
                printf("%d %d %d", i, j, a[i][j]);
                return 0;
            }
        }
    }
    printf("None");

    return 0;
}
