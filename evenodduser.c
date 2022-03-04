#include<stdio.h>
void main(){
    int number;
    printf("Enter Your Number: ");
    scanf("%d", &number);
    if(number%2==0){
        printf("The Number is Even Number");
    }
    else{
        printf("The Number is Odd Number");
    }
}
