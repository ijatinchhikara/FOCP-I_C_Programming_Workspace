/* Problem statement: Given n, print an inverted centered pyramid. The first row contains 2n - 1 asterisks; each next row
has two fewer and one more leading space.
Input format: One integer n (1 ≤ n ≤ 20).
Output format: Print n lines, with the pyramid narrowing toward the bottom. */


#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        // Print asterisks
        for (int j = 1; j <= 2 * (n - i) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
