#include <stdio.h>

void main() {

  int num, k = 0;

  printf("Input a number:\n");
  scanf("%i", &num);

  while (num != 0)
  {
    k = k * 10;
    k = k + num % 10;
    num = num/10;
  }

  printf("Reverse of the number = %d\n", k);
}
