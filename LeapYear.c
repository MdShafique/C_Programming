#include<stdio.h>
void main(){
    int year;
    printf("Enter The Year: ");
    scanf("%d", &year);
    if(year%4==0){
        printf("This Is LeapYear");
    }
    else if(year%400==0){
        printf("Thia Is LeapYear");
    }
    else{
        printf("This Is Not LeapYear");
    }
}
