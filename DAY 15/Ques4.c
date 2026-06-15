#include <stdio.h>
int main(){
  int i , n , count = 0;
  printf(" Enter Array Size : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements :", n);
  for( i = 0 ; i < n ; i++)
    scanf("%d",&arr[i]);

    for( i = 0 ; i < n ; i++){
      if(arr[i] != 0){
      arr[count] = arr[i];
      count++;
    }
  }

  while(count < n){
    arr[count] = 0;
    count++;
  }

  printf("After movinng zero : ");
    for( i = 0 ; i < n ; i++)
    printf("%d ",arr[i]);


  return 0;  
}