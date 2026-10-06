#include <stdio.h>
int main(){
    struct book{
        char title[100];
        char author[50];
        int price;
        int pages;
    };
    int n;
    printf("Enter the number of books : ");
    scanf("%d",&n);
    struct book a[n];
    for(int i = 0;i < n;i++){
        printf("Enter the name : ");
        scanf(" %[^\n]",a[i].title);
        printf("Enter the author : ");
        scanf(" %[^\n]",a[i].author);
        printf("Enter the price : ");
        scanf("%d",&a[i].price);
        printf("Enter the pages : ");
        scanf("%d",&a[i].pages);
    }
    printf("Book whose price more than 500\n");
    for(int i = 0;i < n;i++){
        if(a[i].price > 500){
            printf("%s\n",a[i].title);
        }
    }
    return 0;
}
