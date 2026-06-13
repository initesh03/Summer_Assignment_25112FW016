#include <stdio.h>
int main(){
  int i , n , sum = 0;
  float avg;
  printf(" Enter Array Size : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter %d elements :", n);
  for( i = 0 ; i < n ; i++){
    scanf("%d",&arr[i]);
    sum += arr[i];
  }
   avg = (float)sum/n;
  printf("Sum = %d \nAverage = %.2f",sum , avg);


  return 0;  
}