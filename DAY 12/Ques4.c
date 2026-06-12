#include <stdio.h>
int perfect( int n){
int i , sum = 0; ; 
for( i = 1 ; i <= n/2 ; i++){
  if( n % i == 0)
  sum = sum + i;
}

if( sum == n)
return 1;
else return 0;

}
int main(){
int num;
    printf("Enter number : ");
    scanf("%d",&num);
    if( perfect(num))
    printf("%d is perfect numbber.",num);
    else
    printf("%d is not perfet number.",num);

return 0;  
}