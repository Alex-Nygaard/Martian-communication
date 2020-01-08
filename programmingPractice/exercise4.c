#include <stdio.h>

void main() {

  int num1;
  int num2;
  int num3;

  printf("Enter number 1:\n");
  scanf("%i", &num1);
  printf("Enter number 2:\n");
  scanf("%i", &num2);
  printf("Enter number 3:\n");
  scanf("%i", &num3);

  printf("1st number: %i - 2nd number: %i - 3rd number: %i\n", num1, num2, num3);

  if (num1 > num2 && num1 > num3) {
    printf("The first number is the largest\n");
  }  else if (num2 > num1 && num2 > num3) {
    printf("The second number is the largest\n");
  } else if (num3 > num1 && num3 > num2) {
    printf("The third number is the largest\n");
  } else {
    printf("You submitted atleast 2 equal numbers\n");
  }
}
