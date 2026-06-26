#include <stdio.h>
#include <string.h>
int main () {
    char s[100];
    int i,  count;
    printf("Enter string  : ");
    scanf("%s",s);

    for(i = 0 ; s[i] ; i++){
        printf("%c",s[i]);
        count = 1;
    while( s[i] == s[i+1]){
        count++;
        i++;
      }
      printf("%d",count);
    }
  
   return 0; 
}