#include <stdio.h>

void main() {

  int num;

  printf("Enter a number:\n");
  scanf("%i", &num);
  if (num > 0) {
    printf("%i is a positive number\n", num);
  } else if (num < 0) {
    printf("%i is a negative number\n", num);
  } else {
    printf("%i is 0\n", num);
  }
}
