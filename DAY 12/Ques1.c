#include <stdio.h>
int palindrome( int n){
int x = n , rev = 0 , rem ; 
while( n > 0){
   rem = n % 10;
   rev = rev * 10 + rem;
   n = n / 10;
}

if( x == rev)
return 1;
else return 0;

}
int main(){
int num;
    printf("Enter number : ");
    scanf("%d",&num);
    if( palindrome(num))
    printf("%d is palindrome.",num);
    else
    printf("%d is not palindrome.",num);

return 0;  
}