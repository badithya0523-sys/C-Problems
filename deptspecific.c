#include <stdio.h>
#include <string.h>
int main(){
    struct student{
        char name[50];
        int roll;
        char dept[20];
    };
    int ns;
    printf("Enter the number of students : ");
    scanf("%d",&ns);
    struct student a[ns];
    for(int i = 0;i < ns;i++){
        printf("    STUDENT NO - %d\n",(i + 1));
        printf("Enter the name : ");
        scanf(" %[^\n]",a[i].name);
        printf("Enter the roll : ");
        scanf("%d",&a[i].roll);
        printf("Enter the department : ");
        scanf(" %[^\n]",a[i].dept);
    }
    char dep[20];
    printf("Enter the department : ");
    scanf(" %[^\n]",dep);
    int n = 0;
    for(int i = 0;i < ns;i++){
        if(strcmp(a[i].dept,dep) == 0){
            n = n + 1;
        }
    }
    printf("Number of students : %d",n);
    return 0;
}