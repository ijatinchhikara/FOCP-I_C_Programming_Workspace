/* Problem statement: Given n, print a left-aligned inverted triangle. The first row contains n asterisks; each following row contains one fewer
Input format: One integer n (1 ≤ n ≤ 20).
Output format: Print n lines, with the number of asterisks decreasing from n to 1.  */


#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
