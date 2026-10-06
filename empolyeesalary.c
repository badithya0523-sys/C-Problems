#include <stdio.h>
int main(){
    struct empolyee{
        char name[50];
        int id;
        int basic_salary;
        int bonus;
    }e1;
    printf("Enter the name : ");
    scanf("%[^\n]",e1.name);
    printf("Enter the id : ");
    scanf("%d",&e1.id);
    printf("Enter the basic salary : ");
    scanf("%d",&e1.basic_salary);
    printf("Enter the bonus : ");
    scanf("%d",&e1.bonus);
    int t = e1.basic_salary + e1.bonus;
    printf("Total salary : %d",t);
 
    return 0;
}
