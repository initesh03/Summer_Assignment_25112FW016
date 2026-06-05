#include <stdio.h>
int main (){
    int num , x , rem , sum = 0 , fact  , i;

    printf("Enter the number :");
    scanf("%d",&num);
    x = num;

    while( x > 0 ){
        rem = x % 10;
        fact = 1;
        for( i = 1 ; i <= rem ; i++){
            fact = fact * i;
        }

        sum = sum + fact ;
        x = x / 10;

      }

      if ( sum == num ) printf("%d is a strong number", num);
      else printf("%d is not a strong number", num);
    

    return 0;
}