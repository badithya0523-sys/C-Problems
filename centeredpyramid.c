#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        for(int x = 1;x <= (n-i);x++){
            printf(" ");
        }
        for(int j = 1;j <= i + (i - 1);j++){
            printf("*");
        }
        for(int x = 1;x <= (n-i);x++){
            printf(" ");
        }
        printf("\n");
        
    }
    return 0;
}