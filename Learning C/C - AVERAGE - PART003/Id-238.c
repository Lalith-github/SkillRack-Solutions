#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char countries[N][101];
    char capitals[N][101];

    // Read country-capital pairs
    for (int i = 0; i < N; i++) {
        scanf("%s %s", countries[i], capitals[i]);
    }

    char countryToFind[101];
    scanf("%s", countryToFind);

    // Search for the country
    int found = 0;
    for (int i = 0; i < N; i++) {
        if (strcmp(countries[i], countryToFind) == 0) {
            printf("%s\n", capitals[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("NONE\n");
    }

    return 0;
}
