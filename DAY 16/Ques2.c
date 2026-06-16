#include <stdio.h>
int main(){
  int i , n , j , count , maxCount = 0 , maxElement;
  printf(" Enter Array Size : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements :", n);
  for( i = 0 ; i < n ; i++)
    scanf("%d",&arr[i]);

    for( i = 0 ; i < n ; i++){
        count = 1;
        for( j = i+1 ; j < n ; j++){
      if(arr[i] == arr[j])
      count++;
      }

      if(count > maxCount){
        maxCount = count;
        maxElement = arr[i];
      }

    }

    printf("Max Frequency element = %d\nOccurs %d times",maxElement , maxCount);
    return 0;
}