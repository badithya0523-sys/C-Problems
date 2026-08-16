#include <stdio.h>
int main(){
    int n1,n2,r;
    printf("Enter the first number : ");
    scanf("%d",&n1);
    printf("Enter the second number : ");
    scanf("%d",&n2);
    printf("Note : 1 for Addition,2 for Subtraction,3 for Multiplication,4 for Division");
    printf("\nNote : In division n1 > n2");
    printf("\nEnter the required operation : ");
    scanf("%d",&r);
    switch(r){
        case 1 : printf("Result : %d",n1 + n2);
        break;
        case 2 : printf("Result : %d",n1 - n2);
        break;
        case 3 : printf("Result : %d",n1 * n2);
        break;
        case 4 : printf("Result : %d",n1 / n2);
        break;
        default : printf("Enter the valid operator");
        
    }

        
    return 0;
}