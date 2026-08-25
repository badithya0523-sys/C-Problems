#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        for(int s = 1;s <= i;s++){
            printf("*");
        }
        for(int x = 1;x <= ((n*2) - (i*2));x++){
            printf(" ");
        }
        for(int s = 1;s <= i;s++){
            printf("*");
        }
        printf("\n");

    }
    for(int i = (n - 1);i >= 1;i--){
        for(int s = 1;s <= i;s++){
            printf("*");
        }
        for(int x = 1;x <= ((n*2) - (i*2));x++){
            printf(" ");
        }
        for(int s = 1;s <= i;s++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}