#include <stdio.h>
int main(){
  int i , j , row , col;
  printf(" Enter row and column : ");
  scanf("%d %d",&row , &col);
  int a[row][col] , b[row][col] , diff[row][col];

  printf("Enter matrix 1:\n");
  for( i = 0 ; i < row ; i++)
    for( j = 0 ; j < col ; j++)
    scanf("%d",&a[i][j]);

    printf("Enter matrix 2:\n");
  for( i = 0 ; i < row ; i++)
    for( j = 0 ; j < col ; j++)
    scanf("%d",&b[i][j]);

  for( i = 0 ; i < row ; i++)
    for( j = 0 ; j < col ; j++)
    diff[i][j] = a[i][j] - b[i][j];

    printf("Difference of matrix :\n");
    for( i = 0 ; i < row ; i++){
      for( j = 0 ; j < col ; j++)
      printf("%d ",diff[i][j]);
      printf("\n");
    }
    return 0;
}


