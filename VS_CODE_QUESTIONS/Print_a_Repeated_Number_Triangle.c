/* Problem statement: Given n, print n rows. On row i, print the number i exactly i times, separated by one space.
Input format: One integer n (1 ≤ n ≤ 20).
Output format: Print n lines; row i contains i copies of i.  */


#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
