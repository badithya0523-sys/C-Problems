#include <stdio.h>
int main(){
    int n;
    printf("Enter the numbers of elements : ");
    scanf("%d",&n);
    int u;
    printf("Enter the number upto : ");
    scanf("%d",&u);
    int a[n];
    printf("Enter the elements : \n");
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
        
    }
    printf("Your array : ");
    for(int i = 0;i < n;i++){
        printf("%d ",a[i]);
    }
    for(int i = 1;i <= u;i++){
        int s = 0;
        for(int j = 0;j < n;j++){
            if(i != a[j]){
                s++;
            }
        }
        if(s == (u - 1)){
            printf("\nMissing number : %d",i);
        }
    }
    printf("\n");
}