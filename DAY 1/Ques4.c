
#include <stdio.h>
int main(){
    int n , count = 0;
    printf("Enter the number : ");
    scanf("%d",&n);
    int x = n;

    if (n == 0){ 

        count = 1;

    }
    else{

     if( n < 0 ){
        n = -n;
    }
    
        while( n != 0 ){
            n = n/10;
            count++;
        }
    }
  

  printf(" Number of digits in %d = %d \n", x , count);

    return 0;
}