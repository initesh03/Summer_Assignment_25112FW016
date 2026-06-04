#include <stdio.h>
int main (){
 int n , i , a = 0 , b = 1 , sum;
 printf(" Enter the number :");
 scanf("%d",&n);

 if (n == 1) printf("Term %d = 0",n);
 else if( n == 2) printf("Term %d = 1",n);
 else {
    for ( i =3 ; i<=n ; i++){  
       sum = a + b;
        a = b;
        b = sum;

    }

    printf(" %dth Term = %d",n , b);
   }

 return 0;
}