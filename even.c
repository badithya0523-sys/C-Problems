#include <stdio.h>
int even(int x){
    if(x == 0){
        return 0;
    }
    int a = x % 10;
    int b = x / 10;
    if(a % 2 == 0){
        return 1 + even(b);
    }
    else{
        return 0 + even(b);
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int re = even(n);
    printf("Number of even : %d",re);
    
    return 0;
}