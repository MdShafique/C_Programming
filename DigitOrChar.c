#include<stdio.h>
int main(){
    char ch;
    printf("Enter Any Character: ");
    scanf("%c",&ch);
    if(ch>= 'a' && ch<='z' || ch>='A' && ch<= 'Z'){
        printf("%c is Alphavet ", ch);
    }
    else if(ch>='0' && ch<= '9'){
        printf("%c is Digit", ch);
    }
    else{
        printf("%c is Character", ch);
    }
}
