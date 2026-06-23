#include <stdio.h>
#include <string.h>
int main (){
    char str[100] = {0} , max_char;
    int i , freq[256] = {0} , max = 0;
    printf("Enter string :");
    scanf("%[^\n]", str);
    
    if(str[0] == '\0'){
        printf("Empty string");
        return 0;
    }

    for(i = 0 ; str[i] != '\0' ; i++) 
        freq[(int)str[i]]++; 
     for(i = 0 ; i < 256 ; i++){ 
        if(freq[i] > max){
        max = freq[i];
        max_char = i;
        }
    }
    printf("Max occurring : %c = %d times",max_char , max);
    return 0;
}