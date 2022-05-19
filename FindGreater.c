#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("Enter The Number: ");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("Greater Number a = %d",a);
    }
    else if(b>a && b>c && b>d){
        printf("Greater Number b = %d", b);
    }
    else if(c>a && c>b && c>d){
        printf("Greater Number c = %d", c);
    }
    else{
        printf("Greater Number d = %d", d);
    }
}
