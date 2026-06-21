#include <stdio.h>
int main (){
    char str[100] , temp;
    int i , length = 0;
    printf("Enter string : ");
    scanf("%s",str);

    while(str[length] != '\0')
    length++;

    for(i = 0 ; i < length/2 ; i++){
        temp = str[i];
        str[i] = str[length -1 -i];
        str[length -1-i] = temp;
    }

    printf("Reversed = %s",str);
    return 0;
}