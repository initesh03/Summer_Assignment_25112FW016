#include <stdio.h>
int main(){
  int i , n , j , k;
  printf(" Enter Array Size : ");
  scanf("%d",&n);
  int arr[n];
   printf("Enter elements :");
  for( i = 0 ; i < n ; i++)
    scanf("%d",&arr[i]);

  for( i = 0 ; i < n ; i++){
        for( j = i+1 ; j < n ; j++){
      if(arr[i] == arr[j]){
        
        for( k = j ; k < n-1 ; k++)
            arr[k] = arr[k+1];
            n--;
            j--;
          }
       }
    }

    printf("After removing duplicates : ");
    for( i = 0 ; i < n ; i++)
    printf("%d ",arr[i]);

    return 0;
}
