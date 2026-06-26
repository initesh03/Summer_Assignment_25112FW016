#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50], longest[50] = "";
    int i, len = 0, max = 0;
    printf("Enter string : ");
    scanf("%[^\n]", str);
    for(i = 0; i <= strlen(str); i++) {
        if(str[i]!= ' ' && str[i]!= '\0') word[len++] = str[i];
        else {
            word[len] = '\0';
            if(len > max) { max = len; strcpy(longest, word); }
            len = 0;
        }
    }
    printf("%s %d", longest, max);
    return 0;
}