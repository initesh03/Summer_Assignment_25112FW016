#include <stdio.h>
int main(){
  int i , j , row , col;
  printf(" Enter row and column : ");
  scanf("%d %d",&row , &col);
  int a[row][col] , t[row][col];

  printf("Enter matrix :\n");
  for( i = 0 ; i < row ; i++)
    for( j = 0 ; j < col ; j++)
    scanf("%d",&a[i][j]);

  for( i = 0 ; i < row ; i++)
    for( j = 0 ; j < col ; j++)
    t[j][i] = a[i][j];

    printf("Transpose :\n");
    for( i = 0 ; i < col ; i++){
      for( j = 0 ; j < row ; j++)
      printf("%d ",t[i][j]);
      printf("\n");
    }
    return 0;
}


