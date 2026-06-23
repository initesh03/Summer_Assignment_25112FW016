#include <stdio.h>
int main() {
    char str[100];
    int i, freq[256] = {0};
    printf("Enter string : ");
    scanf("%[^\n]", str); // FIX 1: read spaces

    // Pass 1: Count frequency of all chars
    for(i = 0; str[i]!= '\0'; i++)
        freq[(unsigned char)str[i]]++;

    // Pass 2: Find first char with freq = 1
    for(i = 0; str[i]!= '\0'; i++) {
        if(freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating : %c", str[i]);
            return 0;
        }
    }
    printf("No non-repeating character");
    return 0;
}