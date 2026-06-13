#include <stdio.h>
int main(){
  int i , n;
  printf(" Enter Array Size : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter %d elements :", n);
  for( i = 0 ; i <= n ; i++){
    scanf("%d",&arr[i]);
  }
  printf("Array Elements : ");
  for( i = 0; i <= n; i++)
  printf("%d ",arr[i]);
  return 0;  
}