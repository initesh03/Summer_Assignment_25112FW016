#include <stdio.h>
int main(){
  int i , n , key , low , high , mid , found = 0 ;
  printf(" Enter Array Size : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements :", n);
  for( i = 0 ; i < n ; i++)
    scanf("%d",&arr[i]);

    printf("Element to be search : ");
    scanf("%d",&key);

    low = 0;
    high = n-1;
    while(low <= high){
        mid = (low + high)/2;
        if(arr[mid] == key){
            printf("Element found at index %d", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < key)
        low = mid + 1;
        else 
        high = mid - 1;
    }

    if(found == 0)
    printf("Elementnot found");
    
    
  return 0;  
}