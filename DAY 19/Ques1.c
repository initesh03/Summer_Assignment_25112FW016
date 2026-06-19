#include <stdio.h>
int main(){
  int i , j , row , col;
  printf(" Enter row and column : ");
  scanf("%d %d",&row , &col);
  int a[row][col] , b[row][col] , sum[row][col];

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
    sum[i][j] = a[i][j] + b[i][j];

    printf("Sum of matrix :\n");
    for( i = 0 ; i < row ; i++){
      for( j = 0 ; j < col ; j++)
      printf("%d ",sum[i][j]);
      printf("\n");
    }
    return 0;
}


