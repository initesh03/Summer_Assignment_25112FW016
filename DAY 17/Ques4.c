#include <stdio.h>
int main(){
  int n1 , n2 , i , j , X;
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

    printf("Common element : ");
    X = 0;
    for(i = 0 ; i < n1; i++){
        for(j = 0 ; j < n2 ; j++){
            if(a[i] == b[j]){
                printf("%d ",a[i]);
                X = 1;
                break;
            }
        }
    }
    if(X== 0)
    printf("None");

    return 0;
}



   