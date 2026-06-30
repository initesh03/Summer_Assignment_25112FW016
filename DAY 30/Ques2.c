#include <stdio.h>
#include <string.h>
struct Book { int id; char title[50]; int issued; }; // 0=available, 1=issued
int main() {
    struct Book b[50]; int n=0, ch, i, id;
    do {
        printf("\n1.Add Book 2.Display 3.Issue 4.Return 5.Exit: "); scanf("%d", &ch);
        switch(ch) {
            case 1: printf("ID Title: "); scanf("%d %s", &b[n].id, b[n].title);
                    b[n].issued = 0; n++; break;
            case 2: printf("\nID\tTitle\tStatus\n");
                    for(i=0;i<n;i++)
                        printf("%d\t%s\t%s\n", b[i].id, b[i].title, b[i].issued?"Issued":"Available");
                    break;
            case 3: printf("Enter ID: "); scanf("%d", &id);
                    for(i=0;i<n;i++) 
                      if(b[i].id==id && b[i].issued==0) {
                        b[i].issued=1; printf("Issued"); break;
                    }
                    if(i==n) printf("Not available"); break;
            case 4: printf("Enter ID: "); scanf("%d", &id);
                    for(i=0 ; i < n ; i++) 
                      if(b[i].id==id && b[i].issued==1) {
                        b[i].issued=0; printf("Returned"); break;
                    }
                    break;
        }
    } while(ch!= 5);
    return 0;
}