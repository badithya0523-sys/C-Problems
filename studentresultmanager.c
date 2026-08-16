#include <stdio.h>
int main(){
    int m,p,c,r;
    printf("Enter the marks of physics : ");
    scanf("%d",&p);
    printf("Enter the marks of mathematics : ");
    scanf("%d",&m);
    printf("Enter the marks of chemistry : ");
    scanf("%d",&c);
    printf("Note : 1 for total marks,2 for percenatge,3 for result,4 for grade,5 for performance");
    printf("\nEnter the operation : ");
    scanf("%d",&r);
    float t = m + p + c;
    float per = (t/300)*100;
    switch(r){
        case 1 : printf("Total marks : %f",t);
        break;
        case 2 : printf("Percentage : %f",per);
        break;
        case 3 : 
        if(m <= 35 || p <= 35 || c <= 35){
            printf("Result : Fail");
        }
        else if(t <= 105){
            printf("Result : Fail");
        }
        else{
            printf("Result : Pass");
        }
        break;
        case 4 : 
        if(t >= 270 && t <= 300){
            printf("Grade : A++");
        }
        else if(t >= 225 && t <= 269){
            printf("Grade : A+");
        }
        else if(t >= 180 && t <= 224){
            printf("Grade : A");
        }
        else if(t > 105 && t <= 179){
            printf("Grade : B");
        }
        else if(t <= 105){
            printf("Grade : F");
        }
        else{
            printf("Enter proper marks");
        }
        break;
        case 5 :
        if(t >= 270 && t <= 300){
            printf("Performance : Excellent");
        }
        else if(t >= 225 && t <= 269){
            printf("Performance : Very Good");
        }
        else if(t >= 180 && t <= 224){
            printf("Performance : Good");
        }
        else if(t >= 105 && t <= 179){
            printf("Performance : Average");
        }
        else if(t < 105){
            printf("Perfromance : Poor");
        }
        else{
            printf("Enter proper marks");
        }
        break;


    }
    return 0;
}