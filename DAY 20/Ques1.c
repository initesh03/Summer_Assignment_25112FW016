#include <stdio.h>
int main(){
  int i , j , row1 , col1 , row2 , col2;
  printf(" Enter row and column  0f matrix 1: ");
  scanf("%d %d",&row1 , &col1);

  printf(" Enter row and column of matrix 2 : ");
  scanf("%d %d",&row2 , &col2);

  if( col1 != row2){
    printf("Matrix multiplication not possible");
    return 0;
  }

  int a[row1][col1] , b[row2][col2] , multi[row1][col2];

  printf("Enter matrix 1:\n");
  for( i = 0 ; i < row1 ; i++)
    for( j = 0 ; j < col1 ; j++)
    scanf("%d",&a[i][j]);

    printf("Enter matrix 2:\n");
  for( i = 0 ; i < row2 ; i++)
    for( j = 0 ; j < col2 ; j++)
    scanf("%d",&b[i][j]);

  for( i = 0 ; i < row1 ; i++){
    for( j = 0 ; j < col2 ; j++){
        multi[i][j] = 0;
        for(  int k = 0 ; k < col1 ; k++)

        multi[i][j] += a[i][k] * b[k][j];

    }
}
    
    printf("Multiplication of matrix :\n");
    for( i = 0 ; i < row1 ; i++){
      for( j = 0 ; j < col2 ; j++)
      printf("%d ",multi[i][j]);
      printf("\n");
    }
    return 0;
}


