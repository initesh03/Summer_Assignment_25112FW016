#include <stdio.h>
int main(){
    int n , rem , product = 1;

     printf(" Enter the number :");
     scanf("%d",&n);

      int x = n;

      if (n==0){
        product = 0;
      }
      else{
        
        if(n<0){
            n = -n;
        }
        while (n!=0){
        rem = n % 10;
        product = product * rem;
        n = n/10;

     }

      }

     printf("Product of digits of number %d : %d\n", x , product);

     return 0;

}