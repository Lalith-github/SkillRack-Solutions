#include <stdio.h>
#include <string.h>

int isSpecialChar(char ch) {
    return (ch == '#' || ch == '!' || ch == '_' || ch == '$' || ch == '@');
}

int isUpperCase(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

int isLowerCase(char ch) {
    return (ch >= 'a' && ch <= 'z');
}

int isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

int main() {
    char password[51];
    scanf("%s", password);

    int len = strlen(password);

    if (len < 8 || len > 25) {
        printf("INVALID\n");
        return 0;
    }

    int specialCharCount = 0, digitCount = 0, upperCaseCount = 0, lowerCaseCount = 0;

    for (int i = 0; i < len; i++) {
        if (isSpecialChar(password[i])) {
            specialCharCount++;
        } else if (isDigit(password[i])) {
            digitCount++;
        } else if (isUpperCase(password[i])) {
            upperCaseCount++;
        } else if (isLowerCase(password[i])) {
            lowerCaseCount++;
        }
    }

    if (specialCharCount >= 1 && digitCount >= 2 && upperCaseCount >= 1 && lowerCaseCount >= 1) {
        printf("VALID\n");
    } else {
        printf("INVALID\n");
    }

    return 0;
}
