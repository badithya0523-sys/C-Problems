#include <stdio.h>
#include <string.h>
int main(){
    struct address{
        char city[50];
        char dist[50];
        int pin;
    };
    struct student{
        char name[50];
        int roll;
        int marks;
        struct address add;
    }s1;
    printf("Enter the name : ");
    scanf("%[^\n]",s1.name);
    printf("Enter the roll : ");
    scanf("%d",&s1.roll);
    printf("Enter the marks : ");
    scanf("%d",&s1.marks);
    printf("Enter the city : ");
    scanf(" %[^\n]",s1.add.city);
    printf("Enter the district : ");
    scanf(" %[^\n]",s1.add.dist);
    printf("Enter the pincode : ");
    scanf("%d",&s1.add.pin);
    
    printf("Name : %s\n",s1.name);
    printf("Roll NO : %d\n",s1.roll);
    printf("Marks : %d\n",s1.marks);
    printf("City : %s\n",s1.add.city);
    printf("District : %s\n",s1.add.dist);
    printf("Pin Code: %d\n",s1.add.pin);
    
    
    return 0;
}
