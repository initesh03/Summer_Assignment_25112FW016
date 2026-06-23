#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    int i , freq[256] = {0};
    printf("Enter sentence : ");
    scanf("%s", str);

    for(i = 0 ; str[i] != '\0' ; i++){ 
        freq[(int)str[i]]++;
    }
    
    for(i = 0 ; i < 256 ; i++){ 
        if(freq[i] != 0)
        printf("%c = %d\n",i , freq[i]);
    }
    return 0;
}