#include <stdio.h>
#include <string.h>
struct emp{
        char name[20];
        int id;
        char dept[10];
        int bs;
        int b;
    };
int tot(struct emp x){
    int t;
    t = x.bs + x.b;
    return t;
}
int main(){
    int n;
    printf("Enter the number of employee : ");
    scanf("%d",&n);
    struct emp a[n];
    for(int i = 0;i < n;i++){
        printf("Enter the name : ");
        scanf(" %[^\n]",a[i].name);
        printf("Enter the id : ");
        scanf("%d",&a[i].id);
        printf("Enter the department : ");
        scanf(" %[^\n]",a[i].dept);
        printf("Enter the basic salary : ");
        scanf("%d",&a[i].bs);
        printf("Enter the bonus : ");
        scanf("%d",&a[i].b);
    }
    int ht = a[0].bs + a[0].b;
    int nn = 0;
    for(int i = 0;i < n;i++){
        if(((a[i].bs) + (a[i].b)) > ht){
            ht = (a[i].bs) + (a[i].b);
            nn = i;
        }
        printf("Name : %s\n",a[i].name);
        printf("ID : %d\n",a[i].id);
        printf("Department : %s\n",a[i].dept);
        printf("Basic salary : %d\n",a[i].bs);
        printf("Bonus  : %d\n",a[i].b);
        printf("Total salary : %d\n",a[i].bs + a[i].b);
    }
    printf("  HIGHEST SALARY EMPOLYEE  \n");
    printf("Name : %s\n",a[nn].name);
    printf("ID : %d\n",a[nn].id);
    printf("Department : %s\n",a[nn].dept);
    printf("Basic salary : %d\n",a[nn].bs);
    printf("Bonus  : %d\n",a[nn].b);
    printf("Total salary : %d\n",a[nn].bs + a[nn].b);
    
    
    
}