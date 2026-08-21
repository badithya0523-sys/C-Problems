#include <stdio.h>
int main(){
    int Account_Number;
    int Pin;
    int balance;
    printf("  CREATE A BANK ACCOUNT  \n");
    printf("Account number should contains five digit\n");
    printf("Create a account number : ");
    scanf("%d",&Account_Number);
    printf("Pin number should contain 4 digit\n");
    printf("Create a pin : ");
    scanf("%d",&Pin);
    printf("Enter the amount : ");
    scanf("%d",&balance);
    for(int i = 1;i <= 3;i++){
        int A_N,PIN;
        printf("Enter the account number : ");
        scanf("%d",&A_N);
        printf("Enter the pin : ");
        scanf("%d",&PIN);
        if(A_N == Account_Number && PIN == Pin){
            printf("    BANKING MENU    \n");
            printf("1 for Check balance\n");
            printf("2 for Deposit\n");
            printf("3 for Withdraw\n");
            printf("4 for Transfer\n");
            printf("5 for Change pin\n");
            printf("6 for Exit\n");
            for(int i = 1;i <= 100;i++){
                int op;
                printf("Enter the operation : ");
                scanf("%d",&op);
                if(op == 1){
                    printf("Balance : %d\n",balance);
                }
                else if(op == 2){
                    int depo;
                    printf("Enter the deposit amount : ");
                    scanf("%d",&depo);
                    balance = balance + depo;
                }
                else if(op == 3){
                    int with_draw;
                    printf("Enter the withdraw amount : ");
                    scanf("%d",&with_draw);
                    if(with_draw > balance){
                        printf("Insuffient balance\n");
                    }
                    else if(with_draw <= balance){
                        printf("Transcation completed\n");
                        balance =  balance - with_draw;
                    }
                    else{
                        printf("Enter valid amount\n");
                    }
                }
                else if(op == 4){
                    int transfer;
                    printf("Enter the amount : ");
                    scanf("%d",&transfer);
                    if(transfer <= balance){
                        printf("Transcation completed\n");
                        balance = balance - transfer;
                    }
                    else if(transfer > balance){
                        printf("Amount insuffient\n");
                    }
                    else{
                        printf("Enter the valid amount\n");
                    }
                }
                else if(op == 5){
                    int N_P;
                    printf("Enter the new pin : ");
                    scanf("%d",N_P);
                    if(N_P >= 1000 && N_P <= 9999){
                        Pin = N_P;
                    }
                    else{
                        printf("Enter valid pin\n");
                    }
                }
                else if(op == 6){
                    break;
                }
                else{
                    printf("Enter the valid operation\n");
                }
                
                
            }
        }
        else{
            if(i == 1){
                printf("Enter valid credentials\n");
                printf("Only two attempts remains\n");
            }
            if(i == 2){
                printf("Enter valid credentials\n");
                printf("Only one attempts remains\n");
            }
            if(i == 3){
                printf("You entered wrong credentials\n");
                printf("You account blocked\n");
            }
        }
    }
    
    return 0;
}