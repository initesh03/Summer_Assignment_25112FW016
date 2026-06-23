#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    int i , count = 1;
    printf("Enter sentence : ");
    scanf("%[^\n]", str);

    for(i = 0 ; str[i] != '\0' ; i++){ 
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0' )
        count++;
    }
    
    if(str[0] == ' ' || str[0] == '\0' ) count = 0;
    printf("Words = %d",count);
    return 0;
}