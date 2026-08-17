#include <stdio.h>
int main(){
    float l;
    printf("Enter the number of students : ");
    scanf("%f",&l);
    int pa = 0;
    int fa = 0;
    int tm = 0;
    
    for(int i = 1;i <= l;i++){
        int h = 0;
        int lo = 0;
        printf("STUDENT - %d\n",i);
        int p,c,m;
        printf("Enter the marks of mathematics : ");
        scanf("%d",&m);
        printf("Enter the marks of physics : ");
        scanf("%d",&p);
        printf("Enter the marks of chemistry : ");
        scanf("%d",&c);
        if(p > 100 || m >100 || c > 100){
            printf("Enter the valid marks");
            break;
        }
        h = m;
        lo = m;
        if(p < m && c > p){
            lo = p;
        }
        else if(c < m && p > c){
            lo = c;
        }
        else{
            lo = m;
        }
        if(p > m){
            h = p;
        }
        else if(c > m){
            h = c;
        }
        else{
            h = h;
        }
        float total = p + c + m;
        tm = tm + total;
        float per = (total/300)*100;
        printf("Total Marks : %f\n",total);
        printf("Percenatge : %f",per);
        if(p <= 35 || c <= 35 || m <= 35){
            printf("\nYou failed in exam\n");
            fa = fa + 1;
        }
        else{
            printf("\nYou passed in exam\n");
            pa = pa + 1;
        }
        if(total >= 270 && total <= 300){
            printf("Grade : A++\n");
        }
        else if(total >= 240 && total < 270){
            printf("Grade : A+\n");

        }
        else if(total >= 210 && total < 240){
            printf("Grade : A\n");
        }
        else if(total >= 180 && total <210){
            printf("Grade : B\n");
        }
        else if(total > 105 && total < 180){
            printf("Grade : C\n");
        }
        else if(total <= 105){
            printf("Grade : F\n");
        }
        else{
            printf("Enter the valid marks");
        }
        printf("Highest Mark in subject : %d\n",h);
        printf("Lowest Mark in subject : %d\n",lo);
    }
    printf("FINAL REPORT\n");
    printf("Total Students : %f\n",l);
    printf("Number of Students passed : %d\n",pa);
    printf("Number of Students failed : %d\n",fa);
    float av = tm/l;
    printf("Class average : %f",av);


    return 0;
}