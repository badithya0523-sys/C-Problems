#include <stdio.h>
#include <math.h>
int reverse(int x,int n){
    if(x == 0){
        return 0;
    }
    int a = x % 10;
    int b = x / 10;
    return a*(pow(10,(n-1))) + reverse(b,n-1);
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a = n;
    int i = 0;
    while(a != 0){
        a = a / 10;
        i++;
    }
    int re = reverse(n,i);
    printf("Result : %d",re);
    return 0;
}