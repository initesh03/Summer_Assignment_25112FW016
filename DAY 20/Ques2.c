#include <stdio.h>
int main(){
  int n , i , j , flag = 1;
  printf(" Enter row and column  0f matrix : ");
  scanf("%d",&n);

  int a[n][n];

  printf("Enter matrix :\n");
  for( i = 0 ; i < n ; i++)
    for( j = 0 ; j < n ; j++)
    scanf("%d",&a[i][j]);

  for( i = 0 ; i < n ; i++){
    for( j = 0 ; j < n ; j++){
        if(a[i][j] != a[j][i]){
         flag = 0;
         break;
        }

    }
    if(flag == 0)
    break;
    }
 
    if(flag == 1)
     printf("Symmetric matrix");
    else
     printf("Not Symmetric matrix");
    return 0;
}