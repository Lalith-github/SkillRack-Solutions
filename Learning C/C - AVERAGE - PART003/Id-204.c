#include <stdio.h>

int main() {
    char time[6];
    scanf("%s", time);

    int hours, minutes;
    if (sscanf(time, "%d:%d", &hours, &minutes) != 2) {
        printf("INVALIDINPUT\n");
        return 0;
    }

    if ((hours >= 0 && hours < 12) || (hours == 12 && minutes == 0)) {
        printf("AM\n");
    } else if (hours >= 12 && hours <= 23 && minutes <= 59) {
        printf("PM\n");
    } else {
        printf("INVALIDINPUT\n");
    }

    return 0;
}
