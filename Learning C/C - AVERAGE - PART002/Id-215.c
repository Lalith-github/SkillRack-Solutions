#include <stdio.h>
#include <string.h>

int main() {
    char word[101];
    scanf("%s", word);
    int possibilities = 1;
    int len = strlen(word);

    for (int i = 0; i < len; i++) {
        if (word[i] == 'F' || word[i] == 'T' || word[i] == 'L')
            possibilities *= 2;
        else if (word[i] == 'D')
            possibilities *= 2;
    }

    printf("%d\n", possibilities);

    return 0;
}
