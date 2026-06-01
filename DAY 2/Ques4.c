#include <stdio.h>
int main(){
    int n , rev = 0 , rem ;

     printf("Enter the number :");
     scanf("%d",&n);

      int x = n;

        if(n<0){
            n = -n;
        }
        while(n!=0){
            rem = n % 10;
            rev = rev*10 + rem;
            n = n/10;
        }

       if( rev != x || x < 0 )
        printf("Number is not palindrome\n");
       else
        printf("Number is  palindrome\n");
        
       return 0;


}
