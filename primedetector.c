#include <stdio.h>
void prime(int x){
    for(int i = 2;i < x;i++){
        if(x % i == 0){
            printf("It is not a prime number\n");
            break;
        }
        else{
            printf("It is a prime number\n");
            break;
        }
    }
    printf("1 2 ");
    for(int i = 3;i < x;i++){
        int a = 0;
        for(int j = 2;j <= (i-1);j++){
            if(i % j != 0){
                a++;
            }
        }
        if(a == (i-2)){
            printf("%d ",i);
        }
    }
    return;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    prime(n);
    
    return 0;
}