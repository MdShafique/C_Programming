#include<stdio.h>
main(){
    char n[20];
    char g;
    int b,age;
    printf("Your Name: ");
    gets(n);
    printf("Your Name is: ");
    puts(n);
    printf("Press m for Male and f Female: ");
    g=getchar();
    if(g=='m'){
        printf("You Are Male");
    }
    else{
        printf("You Are Female");
    }
    printf("\n");
    printf("Your Birth Year: ");
    scanf("%d", &b);
    age= 2022-b;
    printf("Your Age Is: %d", age);
}
