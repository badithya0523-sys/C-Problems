#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    int sum = 0;
    for(int i = 0;i < n;i++){
        sum = sum + a[i];
    }
    int av = sum/n;
    printf("Sum of all the elements : %d\n",sum);
    printf("Average of all elements : %d",av);
 
 
    return 0;
}
