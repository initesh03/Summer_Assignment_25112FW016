#include <stdio.h>
int main() 
{
    int n, sum = 0;

     printf("Enter the number : ");
     scanf("%d",&n);

      for(int i = 1 ; i<=n ; i++) 
      {
          
          sum = sum + i;

      }

        printf("sum of first %d natural number : %d\n ", n , sum);


     return 0;
}