#include<stdio.h>
int main() {
    int n, i, count;
    printf("Enter the number :");
    scanf(" %d", &n);

    if (n < 2){
        printf(" Given number is not a prime number");
        return 0;
    }

    count = 0;
    
    for(i = 1; i <= n ; i++) {

     if(n % i == 0) count++;

    }

    if( count == 2) printf("Given number is prime");
    else printf("Given number is not a prime number");

    return 0;
}

        
        
        