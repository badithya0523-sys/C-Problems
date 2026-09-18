#include <stdio.h>
int rec(int l,int b){
    int re = l*b;
    return re;
}
int main(){
    int a,c;
    printf("Enter the length : ");
    scanf("%d",&a);
    printf("Enter the breadth : ");
    scanf("%d",&c);
    int re = rec(a,c);
    printf("Area of the rectangle : %d",re);
    return 0;
}