#include <stdio.h>
#include <string.h>

int iSC(char ch) {
    return (ch == '#' || ch == '!' || ch == '_' || ch == '$' || ch == '@');
}

int iUC(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

int iLC(char ch) {
    return (ch >= 'a' && ch <= 'z');
}

int isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

int main() {
    char p[51];
    scanf("%s", p);
    int len = strlen(p);

    if (len < 8 || len > 25) {
        printf("INVALID\n");
        return 0;
    }

    int sCC = 0, dC = 0, uCC = 0, lCC = 0;

    for (int i = 0; i < len; i++) {
        if (iSC(p[i])) {
            sCC++;
        } else if (isDigit(p[i])) {
            dC++;
        } else if (iUC(p[i])) {
            uCC++;
        } else if (iLC(p[i])) {
            lCC++;
        }
    }

    if (sCC >= 1 && dC >= 2 && uCC >= 1 && lCC >= 1) {
        printf("VALID\n");
    } else {
        printf("INVALID\n");
    }

    return 0;
}
