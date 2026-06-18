#include <stdio.h>
int main(){
  int i , j , n , temp , X;
  printf(" Enter Array Size : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements :", n);
  for( i = 0 ; i < n ; i++)
    scanf("%d",&arr[i]);
    for( i = 0 ; i < n-1 ; i++){
        X = i;
        for( j = i+1 ; j < n ; j++){
           if(arr[j] < arr[X]){
            X = j;
            
            }
            temp = arr[X];
            arr[X] = arr[i];
            arr[i] = temp;
        }
    }
    printf("Sorted : ");
    for( i = 0 ; i < n ; i++)
    printf("%d ",arr[i]);

  return 0;  
}