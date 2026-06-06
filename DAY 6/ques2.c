#include <stdio.h>
int main (){
    int binary , decimal = 0 , base = 1;

    printf("Enter binary : ");
    scanf("%d",&binary);

    while( binary > 0){
        decimal += ( binary % 10 ) * base;
        binary /= 10;
        base *= 2;
    }
  
    printf("Decimal = %d",decimal);

  return 0;  
}