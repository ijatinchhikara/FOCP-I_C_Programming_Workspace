/* Problem statement: Count cells strictly greater than every existing up/down/left/right neighbour; missing boundary neighbours are
ignored.
Input format: r c then matrix
Output format: Number of peaks */

#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int peak = 1;
            if (i > 0 && a[i][j] <= a[i-1][j])
                peak = 0;
            if (i < r-1 && a[i][j] <= a[i+1][j])
                peak = 0;
            if (j > 0 && a[i][j] <= a[i][j-1])
                peak = 0;
            if (j < c-1 && a[i][j] <= a[i][j+1])
                peak = 0;
            if (peak == 1)
                count++;
        }
    }
    printf("%d", count);

    return 0;
}
