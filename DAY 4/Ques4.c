#include <stdio.h>
#include <math.h>

int main (){
    int start , end , x , i , rem ,  count , sum;
    printf("Enter the startimg and ending number :");
    scanf("%d %d", &start ,&end);

     printf(" Armstromg numbers are :");

     for( i = start ; i <= end ; i++){
        x = i;
        sum = 0;
        count = 0;

        while( x != 0){
            count++;
            x =  x / 10;

        }


     while (x > 0){
        rem = x % 10;
        sum += pow(rem , count);
        x = x / 10;
    }

    if ( sum == i) printf("%d ",i);
  }
    
 return 0;
}