#include <stdio.h>
#include <string.h>

int main() {
    char firstDay[4];
    int date;

    // Input the day of the first date
    scanf("%s", firstDay);

    // Input the date
    scanf("%d", &date);

    // Define an array of days
    char days[7][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    // Map the day to an index
    int firstDayIndex = -1;
    for (int i = 0; i < 7; i++) {
        if (strcmp(firstDay, days[i]) == 0) {
            firstDayIndex = i;
            break;
        }
    }

    if (firstDayIndex == -1) {
        printf("Invalid input for the first day.\n");
        return 0;
    }

    // Calculate the day of the given date
    int dayIndex = (firstDayIndex + (date - 1)) % 7;

    printf("%s\n", days[dayIndex]);

    return 0;
}
