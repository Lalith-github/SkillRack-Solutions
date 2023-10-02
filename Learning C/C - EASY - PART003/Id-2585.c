#include <stdio.h>

int main() {
    char s[101];
    scanf("%s", s);

    int i = 0;
    while (s[i] != '\0') {
        int count = s[i] - '0'; // Convert the character to integer
        char ch = s[i + 1];
        for (int j = 0; j < count; j++) {
            printf("%c", ch);
        }
        i += 2;
    }

    return 0;
}
