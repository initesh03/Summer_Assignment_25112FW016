 #include <stdio.h>
int main(){
    int n , rem , sum = 0;

     printf(" Enter the number :");
     scanf("%d",&n);

      int x = n;

      if (n<0){
        n = -n;
      }

      while (n!=0){
        rem = n % 10;
        sum = sum + rem;
        n = n/10;

     }

     printf("sum of digits of number %d : %d\n", x , sum);

     return 0;

}
