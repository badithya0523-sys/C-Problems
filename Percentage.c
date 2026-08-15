#include <stdio.h>
int main() {
    float total, obtained, percentage;

    printf("Enter total marks: ");
    scanf("%f", &total);

    printf("Enter obtained marks: ");
    scanf("%f", &obtained);

    percentage = (obtained / total) * 100;

    printf("Percentage: %f\n", percentage);

    return 0;
}
