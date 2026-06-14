#include <stdio.h>
int main(){
  int i , n , max , second_max;
  printf(" Enter Array Size : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements :", n);
  for( i = 0 ; i < n ; i++)
    scanf("%d",&arr[i]);

    max = arr[0];
    for( i = 0 ; i < n ; i++){
    if(arr[i] > max)
    max = arr[i];
  }

     second_max = -1;
     for( i = 0 ; i < n ; i++) {
      if(arr[i] != max && arr[i] > second_max )
      second_max = arr[i];

     }

     if( second_max == -1)
     printf("No second largest element");
     else
     printf("second largest element = %d", second_max);
  return 0;  
}