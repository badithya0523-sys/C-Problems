#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n >= 0){
        if(n % 2 == 0){
            printf("It is a positive even number");
        }
        else{
            printf("It is a positive odd number");
        }
    }
    else{
        if(n % 2 == 0){
            printf("It is a negative even number");
        }
        else{
            printf("It is a negative odd number");
        }
    }
    return 0;
}
