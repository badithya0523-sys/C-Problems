#include <stdio.h>
int main(){
    int p = 0;
    int ne = 0;
    int e = 0;
    int o = 0;
    for(int i = 1;i <= 100;i++){
        int n;
        printf("\nEnter the number : ");
        scanf("%d",&n);
        if(n > 0 && n % 2 == 0){
            printf("Positive number");
            printf("\nEven number");
            p = p + 1;
            e = e + 1;
        }
        else if(n < 0 && n % 2 != 0){
            printf("Negative number");
            printf("\nOdd number");
            ne = ne + 1;
            o = o + 1;
        }
        else if(n > 0  && n % 2 != 0){
            printf("Positive number");
            printf("\nOdd number");
            p = p + 1;
            o = o + 1;
        }
        else if(n < 0 && n % 2 == 0){
            printf("Negative number");
            printf("\nEven number");
            ne = ne + 1;
            e = e + 1;
        }
        
        if(n == 0){
            break;
        }
        
    }
    printf("\nNumber of positive number : %d",p);
    printf("\nNumber of odd number : %d",o);
    printf("\nNumber of even number : %d",e);
    printf("\nNumber of negative number : %d",ne);

        


    
    return 0;
}