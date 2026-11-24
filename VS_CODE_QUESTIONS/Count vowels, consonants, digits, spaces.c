/* Problem statement: Read a line and count English vowels, consonants, digits, and spaces; ignore punctuation.
Input format: One line
Output format: Four counts in that order */

#include <stdio.h>
#include <ctype.h>
int main() {
    char str[1000];
    int vowels = 0, consonants = 0;
    int digits = 0, spaces = 0;
    int i;
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower((unsigned char)str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            vowels++;
        }
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (ch == ' ') {
            spaces++;
        }
    }
    printf("%d %d %d %d\n",
           vowels, consonants, digits, spaces);

    return 0;
}
