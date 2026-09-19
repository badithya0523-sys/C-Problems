#include <stdio.h>
int fibo(int x){
    if(x == 1){
        return 0;
    }
    else if(x == 2){
        return 1;
    }
    return fibo(x-1) + fibo(x-2);
}
int main(){
    int n;
    printf("Enter the position of number : ");
    scanf("%d",&n);
    int re = fibo(n);
    printf("%d",re);
    
}