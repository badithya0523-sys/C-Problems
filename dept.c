#include <stdio.h>
#include <string.h>
int main(){
    struct student{
        char name[50];
        int roll;
        char dept[20];
    };
    struct student a[3];
    for(int i = 0;i < 3;i++){
        printf("    STUDENT NO - %d\n",(i + 1));
        printf("Enter the name : ");
        scanf(" %[^\n]",a[i].name);
        printf("Enter the roll : ");
        scanf("%d",&a[i].roll);
        printf("Enter the marks : ");
        scanf(" %[^\n]",a[i].dept);
    }
    for(int i = 0;i < 3;i++){
        if(strcmp(a[i].dept,"CSC") == 0){
            printf("Name : %s\n",a[i].name);
            printf("Roll : %d\n",a[i].roll);
            printf("Dept : %s\n",a[i].dept);
        }
    }
    return 0;
}
