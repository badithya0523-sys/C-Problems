#include <stdio.h>
int fac(int x){
    int re = 1;
    for(int i = x;i >= 1;i--){
        re = re * i;   
    }
    return re;

}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int re = fac(n);
    printf("Result : %d",re);
    return 0;
}