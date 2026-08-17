#include <stdio.h>
int main(){
    int b;
    b = 10000;
    for(int i = 1;i <= 100;i++){
        int p;
        printf("\nEnter the pin : ");
        scanf("%d",&p);
        
        if(p == 2008){
            
            printf("Enter 1 for checking balance,2 for withdraw,3 for depoist,4 for exit");
            int r;
            printf("\nEnter the required operation : ");
            scanf("%d",&r);
            if(r == 1){
                printf("Balance : %d",b);
            }
            else if(r == 2){
                int w;
                printf("Enter the withdraw amount : ");
                scanf("%d",&w);
                if(b >= w){
                    printf("Your transcation completed");
                    b = b - w;
                }
                else{
                    printf("Not sufficient amount");
                }
            }
            else if(r == 3){
                int d;
                printf("Enter the deposite amount : ");
                scanf("%d",&d);
                printf("Your transcation completed");
                b = b + d;
            }
            else if(r == 4){
                break;
            }


        }
        else{
            printf("Enter the invalid pin");
        }
    }
    
    return 0;
}