#include <stdio.h>
int main (){
    char str[100];
    int i , vowels = 0 , consonants = 0;
    printf("Enter string : ");
    scanf("%s",str);

    for(i = 0 ; str[i] != '\0' ; i++){
      char ch = str[i];
      if(ch == 'a' || ch == 'A'||
        ch == 'e' || ch == 'E'||  
        ch == 'i' || ch == 'I'|| 
        ch == 'o' || ch == 'O'|| 
        ch == 'u' || ch == 'U')
        vowels++;
        else if((ch >= 'a' && ch <= 'z') ||
        (ch >= 'A' && ch <= 'Z'))
        consonants++;
    }
    

    printf("Vowels = %d\nConsonants = %d",vowels , consonants);
    return 0;
}