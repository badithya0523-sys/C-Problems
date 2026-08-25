#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        for(int y = 1;y <= (n - i);y++){
            printf(" ");
        }
        if(i == 1){
           printf("*");
        }
        else{
            printf("*");
            for(int x = 1;x <= ((i - 1) + ((i - 1)-1));x++){
                printf(" ");
            }
            printf("*");
        }
        for(int y = 1;y <= (n - i);y++){
            printf(" ");
        }
        printf("\n");
    }
    for(int j = (n - 1);j >= 1;j--){
        for(int x = 1;x <= (n - j);x++){
            printf(" ");
        }
        if(j == 1){
            printf("*");
        }
        else{
            printf("*");
            for(int y = 1;y <= ((j-1) + ((j - 1) - 1));y++){
                printf(" ");
            }
            printf("*");
        }
        for(int x = 1;x <= (n - j);x++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}