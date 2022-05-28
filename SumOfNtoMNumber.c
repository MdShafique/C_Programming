#include<stdio.h>
void main(){
    int n,m,sum=0;
    printf("Enter The Number For N: ");
    scanf("%d", &n);
    printf("Enter The Number For M: ");
    scanf("%d", &m);
    for(n; n<=m; n++){
        sum=sum+n;
    }
        printf("%d\n", sum);
}
