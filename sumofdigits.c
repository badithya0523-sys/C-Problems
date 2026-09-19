#include <stdio.h>
int sum(int x){
    if(x == 0){
        return 0;
    }
    int a = x % 10;
    int b = x/10;
    return a + sum(b); 
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int result = sum(n);
    printf("Sum of digits : %d",result);
    
    return 0;
}