#include <stdio.h>

void main() {
    int beton, bankBalance;
    bankBalance=500000;
    printf("Enter The Beton: ");
    scanf("%d", &beton);
    printf("Enter Your Bank Balance: ");
    scanf("%d", &bankBalance);
    if(beton>20000){
        printf("Kopal Khule Geche");
    }
    else if(beton>30000 && bankBalance){
        printf("Oi Chele Chara Kawke Amar Nati Dibo Na");
    }
    else{
        printf("Kopale Bou Nai");
    }
}
