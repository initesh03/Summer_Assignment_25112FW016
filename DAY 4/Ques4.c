#include <stdio.h>
int main (){
    int start , end , x , i , rem , sum;
    printf("Enter the startimg and ending number :");
    scanf("%d %d", &start ,&end);

     printf(" Armstromg numbers are :");

     for( i = start ; i <= end ; i++){
        x = i;
        sum = 0;

     while (x > 0){
        rem = x % 10;
        sum += (rem * rem * rem);
        x = x / 10;
    }

    if ( sum == i) printf("%d ",i);
  }
    
 return 0;
}