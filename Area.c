#include <stdio.h>
int main(){
    float l;
    printf("Enter the lenght of the side of the square: ");
    scanf("%f",&l);
    float area = l * l;
    printf("Area of the square: %f\n", area);
    return 0;
}
