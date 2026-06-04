#include <stdio.h>
int main (){
    int n , i , a = 0 , b = 1 , sum;
    printf("Enter the number :");
    scanf("%d",&n);
     printf("Fibonacci series :");

     for ( i = 1 ; i<=n ; i++){
         printf("%d",a);
        sum = a + b;
        a = b;
        b = sum;

     }

 return 0;
}