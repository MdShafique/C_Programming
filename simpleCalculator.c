#include <stdio.h>

void main()
{

  char op;
  int first, second;
  printf("Enter an operator: ");
  scanf("%c", &op);
  printf("Enter The First Number: ");
  scanf("%d", &first);
  printf("Enter The Second Number: ");
  scanf("%d", &second);

  switch (op)
  {
  case '+':
    printf("%d", first + second);
    break;
  case '-':
    printf("%d", first - second);
    break;
  case '*':
    printf("%d", first * second);
    break;
  case '/':
    printf("%d", first / second);
    break;
  default:
    printf("Error! operator is not correct");
  }
  return 0;
}
