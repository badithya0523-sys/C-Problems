#include <stdio.h>
int main(){
    int m;
    printf("Enter your marks: ");
    scanf("%d", &m);
    m >= 35?printf("You have passed the exam.\n") : printf("You have failed the exam.\n");
    
    return 0;
}