#include <stdio.h>
int main(){
  int i , n , max , min;
  printf(" Enter Array Size : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter %d elements :", n);
  for( i = 0 ; i <= n ; i++){
    scanf("%d",&arr[i]);
  }
  max = min = arr[0];
  for( i = 0 ; i <= n ; i++){
    if(arr[i] > max)
    max = arr[i];
    if(arr[i] < min)
    min = arr[i];
  
  }

  printf("Largest = %d \nSmallest = %d",max , min);


  return 0;  
}