/* Problem statement: Convert total seconds into hours, remaining minutes, and remaining seconds.C Programming Practice Coding Platform Question Bank — Set 2
Input format: totalSeconds
Output format: hours minutes seconds */

#include <stdio.h>
int main()
{
    int totalSeconds;
    int hours, minutes, seconds;
    scanf("%d", &totalSeconds);
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;
    printf("%d %d %d\n", hours, minutes, seconds);

    return 0;
}
