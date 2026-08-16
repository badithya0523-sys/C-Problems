#include <stdio.h>
int main(){
    int u,r;
    printf("Enter electricity units : ");
    scanf("%d",&u);
    printf("Note : 1 for domestic and 2 for commercial\n\n");
    printf("Enter connection type : ");
    scanf("%d",&r);
    switch(r){
        case 1 : 
        if(u >= 0 && u<= 100){
            printf("Bill : %d ",u*3);
        }
        else if(u >= 101 && u<= 200){
            printf("Bill : %d ",300 + ((u - 100)*5));
        }
        else if(u >= 201){
            printf("Bill : %d ",300 + 500 +((u-200)*7));
        }
        else{
            printf("Enter valid units");
        }
        break;
        case 2 :
        if(u >= 0 && u<= 100){
            printf("Bill : %d ",u*5);
        }
        else if(u >= 101 && u<= 200){
            printf("Bill : %d ",500 + ((u - 100)*7));
        }
        else if(u >= 201){
            printf("Bill : %d ",500 + 700 +((u-200)*10));
        }
        else{
            printf("Enter valid units");
        }
        break;
        default : printf("Enter the valid operator");
    }
    return 0;
}