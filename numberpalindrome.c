#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= (n-i);j++){
            printf(" ");
        }
        for(int x = i;x >= 1;x--){
            printf("%d",x);
        }
        for(int y = 2;y <= i;y++){
            printf("%d",y);
        }
        for(int j = 1;j <= (n-i);j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}