#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    int l = a[0];
    int s = a[0];
    for(int i = 1;i < n;i++){
        if(a[i] > l){
            l = a[i];
        }
        else{
            l = l;
        }
    }
    for(int i = 1;i < n;i++){
        if(a[i] < s){
            s = a[i];
        }
        else{
            s = s;
        }
    }
    printf("Largest element : %d\n",l);
    printf("Smallest element : %d\n",s);
 
 
    return 0;
}
