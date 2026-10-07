#include <stdio.h>
#include <string.h>
struct complex{
    int r;
    int i;
    char a;
};
struct complex sum(struct complex x,struct complex y){
    struct complex z;
    z.r = x.r + y.r;
    z.i = x.i + y.i;
    z.a = 'i';
    return z;
}
int main(){
    struct complex n1,n2,r;
    printf("Enter the real part : ");
    scanf("%d",&n1.r);
    printf("Enter the imaginary part : ");
    scanf("%d",&n1.i);
    n1.a = 'i';
    printf("Enter the real part : ");
    scanf("%d",&n2.r);
    printf("Enter the imaginary part : ");
    scanf("%d",&n2.i);
    n2.a = 'i';
    r = sum(n1,n2);
    printf("Result : %d + %d%c",r.r,r.i,r.a);
 
    return 0;
}
