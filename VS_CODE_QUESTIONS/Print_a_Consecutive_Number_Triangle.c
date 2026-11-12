/* Problem statement: Print consecutive positive integers across triangular rows. Row 1 has one number, row 2 has two,
and so on. Counting starts at 1 and continues across rows.
Input format: One integer n (1 ≤ n ≤ 20).
Output format: Print n lines, with values separated by one space.  */

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
