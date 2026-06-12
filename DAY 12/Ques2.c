#include <stdio.h>
int Armstrong( int n){
int x = n , sum = 0 , rem ; 
while( n > 0){
   rem = n % 10;
   sum = sum + rem * rem *rem;
   n = n / 10;
}

if( x == sum)
return 1;
else return 0;

}
int main(){
int num;
    printf("Enter number : ");
    scanf("%d",&num);
    if( Armstrong(num))
    printf("%d is Armstrong.",num);
    else
    printf("%d is not Armstrong.",num);

return 0;  
}