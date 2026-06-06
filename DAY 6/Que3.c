#include <stdio.h>
int main (){
    int num , count = 1;

    printf("Enter number : ");
    scanf("%d",&num);

    while( num > 0){
        if( num % 2 == 1)
        count++;
        num /= 2;
    }

    printf("set bit = %d",count);

  return 0;  
}