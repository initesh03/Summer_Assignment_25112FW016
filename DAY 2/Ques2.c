#include <stdio.h>
int main(){
    int n , rev = 0 , rem ;

     printf("Enter the number :");
     scanf("%d",&n);

      int x = n;

       if(n==0){
        rev = 0;
       }
       else{
        if(n<0){
            n = -n;
        }
        while(n!=0){
            rem = n % 10;
            rev = rev*10 + rem;
            n = n/10;
        }
       }

       if (x<0) rev = -rev;
       
       printf("Reverse of number %d is : %d\n",x , rev);
       
       return 0;


}
