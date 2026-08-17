#include <stdio.h>
int main(){
    int num = 0;
    int tu = 0;
    float tb = 0;
    int i;
    for(int i = 1;i <= 100;i++){
        int units;
        printf("CUSTOMER %d\n",i);
        printf("Enter the units : ");
        scanf("%d",&units);
        if(units > 0){
            num = num + 1;
            tu = tu + units;
        }
        int base;
        if(units > 0 && units <= 100){
            base = units*2;
        }
        else if(units >= 101 && units <= 200){
            base = 200 + ((units - 100)*3);
        }
        else if(units >= 201 && units <= 300){
            base = 200 + 300 + ((units - 200)*5);
        }
        else if(units > 300){
            base = 200 + 300 + 500 + ((units - 300)*7);
        }
        else if(units == 0){
            break;
        }
        else {
            printf("Enter the valid units\n");
        }

        float fc = base + 50;
        float tax = fc + ((fc/100)*5);
        int d;
        if(base > 1000){
            d = tax - ((tax/100)*10); 
        }
        else{
            d = tax;
        }
        printf("Base bill : %d\n",base);
        printf("Fixed charge : 50 \n");
        printf("Base with fixed charge : %f \n",fc);
        printf("Base with tax : %f \n",tax);
        if(units == 0){
            break;
        }
        if(base > 1000){
            printf("You got discount of 10%\n");
            printf("Total bill : %d \n",d);
        }
        else{
            printf("Total bill : %d \n",d);
        }
        tb = tb + d;
        
    }
    printf("\nFINAL REPORT\n");
    printf("Total customers : %d\n",num);
    printf("Total units : %d\n",tu);
    printf("Total amount : %f\n",tb);
    float av = tb/num;
    printf("Average amount : %f",av);
    return 0;
}