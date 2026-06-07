#include <stdio.h>
int gcd(int a , int b){
    if( b == 0 )
    return a;
     return gcd(b , a % b);
}

int main (){
    int num1 , num2;
    printf("Enter two number : ");
    scanf("%d %d",&num1 , &num2);
    printf("GCD = %d", gcd(num1 , num2));
    return 0;
}