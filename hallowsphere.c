#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n % 2 == 1){
        for(int i = 1;i <= n;i++){
        if(i == 1){
            for(int x = 1;x <= (n - i);x++){
                printf(" ");
            }
            for(int j = 1;j <= 1;j++){
                printf("*");
            }
            for(int x = 1;x <= (n - i);x++){
                printf(" ");
            }
            printf("\n");
        }
        else if((i > 1) && (i < ((n/2) + 1))){
            for(int x = 1;x <= (n - i);x++){
                printf(" ");
            }
            printf("*");
            for(int y = 1;y <= ((2*i) - 3);y++){
                printf(" ");
            }
            printf("*");
            for(int x = 1;x <= (n - i);x++){
                printf(" ");
            }
            printf("\n");

        }
        else if(i == ((n/2) + 1)){
            for(int x = 1;x <= (n - i);x++){
                printf(" ");
            }
            printf("*");
            for(int y = 1;y <= ((2*i) - 3);y++){
                printf(" ");
            }
            printf("*");
            for(int x = 1;x <= (n - i);x++){
                printf(" ");
            }
            printf("\n");
        }
        else if((i > ((n/2) + 1)) && (i < n)){
            for(int x = 1;x <= (n - i);x++){
                printf(" ");
            }
            printf("*");
            for(int y = 1;y <= ((2*i) - 3);y++){
                printf(" ");
            }
            printf("*");
            for(int x = 1;x <= (n - i);x++){
                printf(" ");
            }
            printf("\n");


        }
        else if(i == n){
            for(int i = 1;i <= (n + (n - 1));i++){
                printf("*");
            }
            printf("\n");
        }

        

        }
    }
    else{
        printf("Enter the odd number");
    }

    
    
    return 0;
}