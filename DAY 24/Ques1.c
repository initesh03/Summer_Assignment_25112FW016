#include <stdio.h>
#include <string.h>
int main () {
    char s1[100] , s2[100] , temp[100];
    printf("Enter string 1 : ");
    scanf("%s",s1);
    printf("Enter string 2 : ");
    scanf("%s",s2);

    if(strlen(s1) != strlen(s2)){
        printf("No");
        return 0;
    }

    strcpy(temp , s1);
    strcat(temp , s1);

    if(strstr(temp , s2) != NULL)
    printf("Yes , rotation");
    else
    printf("No");
  
   return 0; 
}