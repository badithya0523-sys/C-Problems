#include <stdio.h>
int main(){
    int n;
    printf("Enter the pin : ");
    scanf("%d",&n);
    if( n == 2008){
        printf("Enter 1 for checking balance");
        printf("\nEnter 2 for withdraw");
        printf("\nEnter 3 for Deposit");
        int r,b = 50000;
        printf("\nEnter required operation : ");
        scanf("%d",&r);
        if(r == 1){
            printf("Bank balance : %d",b);
        }
        else if(r == 2){
            int a;
            printf("Enter the amount : ");
            scanf("%d",&a);
            if(a <= 50000){

                printf("Remaining balance = %d",50000 - a);
                b = b -a;
            }
            else{
                printf("Insufficient balance");
            }
        }
        else if(r == 3){
            int n;
            printf("Enter the amount : ");
            scanf("%d",&n);
            printf("New balance = %d",50000 + n);
            b = b + n;

        }
        

    }
        else{
        printf("You entered wrong pin");
        }
    
    return 0;
}
