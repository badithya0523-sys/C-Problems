#include <stdio.h>
#include <string.h>
struct student{
    char name[20];
    int roll;
    int marks;
};
void result(struct student x){
    if(x.marks >= 40){
        printf("Pass\n");
    }
    else{
        printf("Fail\n");
    }
}
int main(){
    struct student s1,s2;
    strcpy(s1.name,"Adithya");
    s1.roll = 33;
    s1.marks = 67;
    strcpy(s2.name,"Vennela");
    s2.roll = 143;
    s2.marks = 33;
    result(s1);
    result(s2);
 
    return 0;
}
