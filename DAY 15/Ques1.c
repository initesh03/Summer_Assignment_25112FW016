#include <stdio.h>
int main(){
  int i , n , temp;
  printf(" Enter Array Size : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements :", n);
  for( i = 0 ; i < n ; i++)
    scanf("%d",&arr[i]);
    for( i = 0 ; i < n/2 ; i++){
     temp = arr[i];
     arr[i] = arr[n-1-i];
     arr[n-1-i] = temp;
    }
    printf("Reversed arrsy : ");
    for( i = 0 ; i < n ; i++)
    printf("%d ",arr[i]);

  return 0;  
}