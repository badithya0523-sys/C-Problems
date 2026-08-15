#include <stdio.h>
int main(){
    float p;
    printf("Enter the marks of Physics : ");
    scanf("%f",&p);
    float c;
    printf("Enter the marks of Chemistry : ");
    scanf("%f",&c);
    float m;
    printf("Enter the marks of Mathematics : ");
    scanf("%f",&m);
    float s;
    printf("Enter the marks of Sanskrit : ");
    scanf("%f",&s);
    float e;
    printf("Enter the marks of English : ");
    scanf("%f",&e);
    float t = (p+c)+(m+s)+e;
    float per = (t/500)*100;
    printf("Total marks : %d ",t);
    printf("\nPercenatge : %f ",per);
    if((p <= 35) || (c <= 35) || (m <= 35) || (s <= 35) || (e <= 35) ){
        printf("\nYou failed");
        printf("\nGrade : F");
    }
    else if(t >= 450 && t <= 500){
        printf("\nGrade : A+");
    }
    else if(t >= 400 && t < 450){
        printf("\nGrade : A");
    }
    else if(t >= 350 && t < 400){
        printf("\nGrade : B");

    }
    else if(t >= 300 && t < 350){
        printf("\nGrade : C");
    
    }
    else if(t >= 250 && t < 300){
        printf("\nGrade : D");
    }
    else{
        printf("\nGrade : F");
    }

    return 0;
}