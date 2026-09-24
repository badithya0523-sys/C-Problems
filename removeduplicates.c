#include <stdio.h>
int main(){
    int n;
    printf("Enter the numbers of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements : \n");
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
        
    }
    printf("Your array : ");
    for(int i = 0;i < n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    int d = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i != j){
                if(a[i] == a[j]){
                    d = d + 1;
                }
                else{
                    
                }
            }
            
        }
    }
    int nn = n - d;
    int b[nn];
    int x = 0;
    for(int i = 0;i < n;i++){
        int s = 0;
        for(int j = 0;j < n;j++){
            if(i != j){
                if(a[i] != a[j]){
                    s = s + 1;
                }
            }    
        }
        if(s == (n-1)){
            b[x] = a[i];
            x = x + 1;
        
        }
    }
    printf("New array : ");
    for(int i = 0;i < nn;i++){
        printf("%d ",b[i]);
    }
}