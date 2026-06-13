#include <stdio.h>
int main(){
  int i , n , even = 0 , odd = 0;
  printf(" Enter Array Size : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter %d elements :", n);
  for( i = 0 ; i <= n ; i++){
    scanf("%d",&arr[i]);
    if(arr[i] % 2 == 0)
     even++;
    else 
     odd++;
  }
  printf ("Even = %d \nOdd = %d",even , odd);


  return 0;  
}