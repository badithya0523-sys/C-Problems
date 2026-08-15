#include <stdio.h>
int main(){
    int u;
    printf("Enter the units : ");
    scanf("%d",&u);
    if(u >= 0 && u<=100){
        printf("Electricity bill : %d",u*2);
    }
    else if(u >= 101 && u <= 200){
         printf("Electricity bill : %d",200 + ((u - 100)*3));


    }
    else if(u >= 201 && u <= 300){
         printf("Electricity bill : %d",200 + 300 +((u - 200)*5));
    }
    else{
        printf("Electricity bill : %d ",200 + 300 + 500 + ((u - 300)*7));
    }
    return 0;
}
