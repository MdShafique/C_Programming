#include<stdio.h>
int main()
{
int first=0, second=1, i, n, sum=0;
printf("Enter the number: ");
scanf("%d",&n);
printf("Fibonacci Series is: ");
for(i=0 ; i<=n ; i++){
    if(i <= 1){
        sum=i;
    }
    else{
        sum=first + second;
        first=second;
        second=sum;
    }
    printf(" %d",sum);
    }

    printf("\n");



{
    int x,i=0,j=1,k;
    printf("enter a number : ");
    scanf("%d",&x);
    for(int a=1;a<=x;a++)
    {
     printf("%d ",i);

     k=i+j;
     i=j;
     j=k;

    }
}
}
