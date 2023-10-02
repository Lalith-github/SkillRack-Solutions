#include <stdio.h>
#include <string.h>

int main() {
    char s[101];

    // Read input string
    scanf("%s", s);

    // Find the index of the first underscore
    int underscoreIndex = -1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '_') {
            underscoreIndex = i;
            break;
        }
    }

    // Reverse the string till the first underscore
    int start = 0;
    int end = (underscoreIndex == -1) ? strlen(s) - 1 : underscoreIndex - 1;
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }

    // Print the modified string
    printf("%s", s);

    return 0;
}
