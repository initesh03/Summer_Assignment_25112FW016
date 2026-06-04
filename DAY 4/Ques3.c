#include <stdio.h>
int main (){
    int num , x , rem , sum = 0;
    printf("Enter the number :");
    scanf("%d", &num);
    x = num;
    while (num > 0){
        rem = num % 10;
        sum += (rem * rem * rem);
        num = num / 10;
    }
    if( x == sum) printf(" Given number %d is a Armstromg number",x);
    else  printf(" Given number %d is not  a Armstromg number",x);
    
 return 0;
}