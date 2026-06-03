#include <stdio.h>
int main(){
int a, b, i, lcm, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    
    printf("GCD = %d\n", gcd);
    
    lcm = (a*b) / gcd;
    printf("lcm of %d and %d = %d",a,b,lcm);
    
    return 0;
}