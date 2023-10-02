#include <stdio.h>
#include <string.h>

void reverseWords(char *str) {
    int start = 0;
    int end = strlen(str) - 1;
    char temp;
    
    while (end > start) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    
    start = 0;
    while (str[start] != '\0') {
        end = start;
        while (str[end] != ' ' && str[end] != '\0') {
            end++;
        }
        
        int wordLen = end - start;
        for (int i = 0; i < wordLen / 2; i++) {
            temp = str[start + i];
            str[start + i] = str[end - i - 1];
            str[end - i - 1] = temp;
        }
        
        start = end + 1;
    }
}

int main() {
    char str[100];
    gets(str);
    
    reverseWords(str);
    
    printf("%s\n", str);
    
    return 0;
}
