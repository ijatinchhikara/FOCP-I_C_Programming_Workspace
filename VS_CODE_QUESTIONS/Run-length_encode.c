/* Problem statement: Compress consecutive repeated letters as character followed by run length; e.g. aaabbc -> a3b2c1.
Input format: Letters-only string
Output format: Encoded string */

#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    int i, count = 1;
    int n;
    scanf("%999s", str);
    n = strlen(str);
    for (i = 0; i < n - 1; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }
    printf("%c%d\n", str[n - 1], count);

    return 0;
}
