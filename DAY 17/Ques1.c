#include <stdio.h>
int main(){
  int i , n1 , n2 , k = 0;
  printf("Enter Array 1 Size : ");
  scanf("%d",&n1);
  int arr1[n1];
   printf("Enter elements :");
  for( i = 0 ; i < n1 ; i++)
    scanf("%d",&arr1[i]);

    printf("Enter Array 2 Size : ");
  scanf("%d",&n2);
  int arr2[n2];
   printf("Enter elements :");
  for( i = 0 ; i < n2 ; i++)
    scanf("%d",&arr2[i]);

    int merged[n1 + n2];
    for( i = 0 ; i < n1 ; i++)
    merged[k++] = arr1[i];
     for( i = 0 ; i < n2 ; i++)
     merged[k++] = arr2[i];

     printf("Merges Array : ");
      for( i = 0 ; i < n1 + n2 ; i++)
      printf("%d ",merged[i]);

      return 0;
}

