 #include <stdio.h>
 int main(){
    char s[100] ;
    int i , j = 0 , freq[256] = {0};
    printf("Enter string :");
    scanf("%s",s);
    for(i = 0 ; s[i] ; i++){
        if(freq[(unsigned char)s[i]] == 0) {
            freq[(unsigned char)s[i]] = 1;
            s[j++] =s[i];
        } 
    }
    s[j] = '\0';
    printf("%s",s);
    return 0;     
 }
