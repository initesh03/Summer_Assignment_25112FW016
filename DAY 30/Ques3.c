#include <stdio.h>
struct Emp { int id; char name[50]; float sal; };
int main() {
    struct Emp e[50]; int n=0, ch, i, id, found;
    do {
        printf("\n1.Add 2.View All 3.Search by ID 4.Max Salary 5.Exit: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1: printf("ID Name Salary: ");
                    scanf("%d %s %f", &e[n].id, e[n].name, &e[n].sal); n++; break;
            case 2: for(i=0 ; i<n ; i++)
                        printf("ID:%d Name:%s Sal:%.2f\n", e[i].id, e[i].name, e[i].sal);
                    break;
            case 3: printf("Enter ID: "); scanf("%d", &id); found=0;
                    for(i=0 ; i < n ; i++) 
                     if(e[i].id==id) {
                      printf("Name:%s Sal:%.2f", e[i].name, e[i].sal); found=1; break;
                    }
                    if(!found) printf("Not found"); break;
            case 4: if(n==0) { printf("No records"); break; }
                    int max=0;
                    for(i=1;i<n;i++) if(e[i].sal > e[max].sal) max=i;
                    printf("Max Sal: %s %.2f", e[max].name, e[max].sal); break;
        }
    } while(ch!= 5);
    return 0;
}