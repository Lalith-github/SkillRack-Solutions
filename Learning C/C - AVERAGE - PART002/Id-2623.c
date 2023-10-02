#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    char start_time[6];
    scanf("%s", start_time);

    int on_time = 0;
    int hours, minutes;
    sscanf(start_time, "%d:%d", &hours, &minutes);

    int class_time = hours * 60 + minutes;

    for (int i = 0; i < N; i++) {
        char arrival_time[6];
        scanf("%s", arrival_time);

        int hours, minutes;
        sscanf(arrival_time, "%d:%d", &hours, &minutes);

        int arrival_minutes = hours * 60 + minutes;

        if (arrival_minutes <= class_time)
            on_time++;
    }

    if (on_time >= M)
        printf("No\n");
    else
        printf("Yes\n");

    return 0;
}
