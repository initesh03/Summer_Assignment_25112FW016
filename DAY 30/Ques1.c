#include <stdio.h>
#include <string.h>
int main() {
    int roll[50], n=0, ch, i, r, found;
    char name[50][50]; float marks[50];
    do {
        printf("\n1.Add 2.Display 3.Search 4.Exit: "); scanf("%d", &ch);
        switch(ch) {
            case 1: printf("Roll Name Marks: ");
                    scanf("%d %s %f", &roll[n], name[n], &marks[n]); n++; break;
            case 2: for(i=0;i<n;i++)
                        printf("Roll:%d Name:%s Marks:%.2f\n", roll[i], name[i], marks[i]);
                    break;
            case 3: printf("Enter Roll: "); scanf("%d", &r); found=0;
                    for(i=0;i<n;i++) 
                      if(roll[i]==r) {
                        printf("Name:%s Marks:%.2f", name[i], marks[i]); found=1; break;
                    }
                    if(!found) printf("Not found"); break;
        }
    } while(ch!= 4);
    return 0;
}