#include <stdio.h>
void rev(int x[],int n){
    if(n % 2 != 0){
        int i = 0;
        int j = n - 1;
        while(i < j){
            int temp = x[i];
            x[i] = x[j];
            x[j] = temp;
            i++;
            j--;        
        }
    }
    else{
        int i = 0;
        int j = n - 1;
        while(i < j){
            int temp = x[i];
            x[i] = x[j];
            x[j] = temp;
            i++;
            j--;
        }
    }
    
}
int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements : \n");
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    rev(a,n);
    printf("Reverse array \n");
    for(int i = 0;i < n;i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}