#include <stdio.h>

void main() {

  int num;

  printf("Enter a number:\n");
  scanf("%i", &num);
  if (num % 2 == 0) {
    printf("%i is an even number\n", num);
  } else {
    printf("%i is an odd number\n", num);
  }
}
