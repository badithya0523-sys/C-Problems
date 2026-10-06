#include <stdio.h>
int main(){
    struct student{
        char name[50];
        int roll;
        float percentage;
        char grade;
    };
    struct student  a[2];
    for(int i = 0;i < 2;i++){
        printf("Enter the name : ");
        scanf(" %[^\n]",a[i].name);
        printf("Enter the roll : ");
        scanf("%d",&a[i].roll);
        printf("Enter the percentage : ");
        scanf("%f",&a[i].percentage);
        printf("Enter the grade : ");
        scanf(" %c",&a[i].grade);
    }
    for(int i = 0;i < 2;i++){
        printf("Name : %s\n",a[i].name);
        printf("Roll no : %d\n",a[i].roll);
        printf("Percentage : %f\n",a[i].percentage);
        printf("Grade : %c\n",a[i].grade);
    }

 
    return 0;
}
