#include<stdio.h>
int main(){
   int age;
   printf("Enter Your Age: ");
    scanf("%d", &age);
    if(age>=0 && age<= 17){
        printf("You Are A Child");
    }
    else if(age>=18 && age<= 24){
        printf("You Are Young");
    }
    else{
         printf("You Are Adult");
    }
}
