#include <stdio.h>
int add(int a,int b){
    int re = a + b;
    return re;
}
int sub(int a,int b){
    int re = a - b;
    return re;
}
int mul(int a,int b){
    int re = a * b;
    return re;
}
int main(){
    int a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    char r;
    printf("Enter operation : ");
    scanf(" %c",&r);
    switch(r){
        case 'A' :{
        int re = add(a,b);
        printf("Result : %d",re);
        break;
        }    
        case 'S' :{
        int re = sub(a,b);
        printf("Result : %d",re);
        break;
        }    
        case 'M' :{
        int re = mul(a,b);
        printf("Result : %d",re);
        break;
        }    
        default :
        printf("Enter proper operation");
        
    }
    
    return 0;
}