#include <stdio.h>
#include <string.h>
int main (){
    char str1[100], str2[100];
    int i , freq1[256] = {0} , freq2[256] = {0};
    printf("Enter string : ");
    scanf("%s", str1);
    printf("Enter string : ");
    scanf("%s", str2);

    for(i = 0 ; str1[i] != '\0' ; i++) 
        freq1[(int)str1[i]]++; 
    for(i = 0 ; str2[i] != '\0' ; i++)
        freq2[(int)str2[i]]++; 
        
        for(i = 0 ; i < 256 ; i++){ 
        if(freq1[i] != freq2[i]){
        printf("Not anagram");
        return 0;
        }
    }
         
    printf("Anagram");
    return 0;
}