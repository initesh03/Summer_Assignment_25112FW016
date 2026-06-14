#include <stdio.h>
int main(){
  int i , n , j , duplicate;
  printf(" Enter Array Size : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements :", n);
  for( i = 0 ; i < n ; i++)
    scanf("%d",&arr[i]);

    printf("Duplicate elements : ");
    for( i = 0 ; i < n ; i++){
      for( j = i + 1 ; j < n ; j++){
        if(arr[i] == arr[j]){
          duplicate = 0;
          for( int k = 0 ; k < i ; k++){
            if(arr[k] == arr[i]){
            duplicate = 1;
            break;
          }

         }
         if(!duplicate){
          printf("%d ", arr[i]);
          break;
         }
        }
       }
      }
    
  return 0;  
}