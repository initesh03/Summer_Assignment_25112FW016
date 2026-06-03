#include <stdio.h>
int main() {
    int start, end, i, j, count;

    printf("Enter the starting number :")
    scanf("%d",&start);

    printf("Enter the ending number :")
    scanf("%d",&end);

    count = 0;
    
    for(i = start; i <= end; i++) {
        
        for(j = 1; j <= i; j++) {
            if(i % j == 0) count++;
        }
        
        if(count == 2) 
            printf("%d ", i);
    }
            return 0;
}