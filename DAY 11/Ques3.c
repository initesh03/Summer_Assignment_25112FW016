#include <stdio.h>
int prime( int n){
    int i;
    if( n <= 1)
    return 0;
    else
    for( i = 2 ; i <= n/2 ; i++){
        if( n % i == 0 )
        return 0;
    }
    return 1;
}
int main(){

int num;
    printf("Enter number : ");
    scanf("%d",&num);

    if (prime(num))
    printf("%d is prime",num);
    else
     printf("%d is not prime",num);


  return 0;  
}