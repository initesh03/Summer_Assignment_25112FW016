#include <stdio.h>
int main(){
  int n1 , n2 , i , j , k = 0 , X;
  printf("Enter Array 1 Size : ");
  scanf("%d",&n1);
  int a[n1];
   printf("Enter elements :");
  for( i = 0 ; i < n1 ; i++)
    scanf("%d",&a[i]);

    printf("Enter Array 2 Size : ");
  scanf("%d",&n2);
  int b[n2];
   printf("Enter elements :");
  for( i = 0 ; i < n2 ; i++)
    scanf("%d",&b[i]);
   
    int uni[n1 + n2];
    for( i = 0 ; i < n1 ; i++)
    uni[k++] = a[i];

    for( i = 0 ; i < n2 ; i++){
      X = 0;
     for( j = 0 ; j < n1 ; j++){
        if(b[i] == a[j]){
            X = 1;
            break;
        }
     }

     if(X == 0)
     uni[k++] = b[i];
    }

    printf("Union : ");
     for( i = 0 ; i < k ; i++)
      printf("%d ",uni[i]);

      return 0;
} 



