#include <stdio.h>
int main(){
  int i , n , j , sum , found = 0;
  printf(" Enter Array Size : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements :");
  for( i = 0 ; i < n ; i++)
    scanf("%d",&arr[i]);

    printf("Enter Sum : ");
    scanf("%d",&sum);

    for( i = 0 ; i < n ; i++){
        for( j = i+1 ; j < n ; j++){
      if(arr[i] + arr[j]  == sum){
        printf("Pair found : %d + %d = %d\n", arr[i] , arr[j] , sum);
        found = 1;
       }
     }
    }  

    if(found == 0)
    printf("No pair found");
    return 0;
}
    