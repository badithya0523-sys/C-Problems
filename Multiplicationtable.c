#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int s = 0;
    for(int i = 1;i <= 10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
        s = s + (n*i);
    }
    printf("\nSum of the table : %d",s);
    return 0;
}