#include <stdio.h>
int main(){
  int i , n ,total, sum = 0;
  printf(" Enter Array Size : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter %d elements from 1 to %d :", n , n+1);
  for( i = 0 ; i < n ; i++){
    scanf("%d",&arr[i]);
    sum += arr[i];
    }

    total = (n+1) * (n+2)/2;
    printf("Missing number %d : ",total - sum);
    return 0;
}