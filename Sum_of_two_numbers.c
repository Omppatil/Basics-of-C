#include <stdio.h>
int main(void)
{
  int num1, num2, sum;
  printf("Enter the first num: ");
  scanf("%d", &num1);

  printf("Enter the second num: ");
  scanf("%d", &num2);

  sum = num1 + num2;

  printf("The sum of two num: %d", sum);

  return 0;

}