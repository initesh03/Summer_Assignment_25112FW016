#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    int i , j = 0;
    printf("Enter sentence : ");
    scanf("%[^\n]", str);

    for(i = 0 ; str[i] != '\0' ; i++){ 
        if(str[i] != ' '){
            str[j] = str[i];
            j++;
        }
    }
    
    str[j] = '\0';
    printf("No spaces = %s",str);
    return 0;
}