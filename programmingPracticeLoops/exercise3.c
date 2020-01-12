#include <stdio.h>

void main() {

  int num;

  printf("Input number of terms:\n");
  scanf("%i", &num);

  int tot = 1;

  for (int i=num;i>1;i--) {
    tot *= i;
  }

  printf("The factorial of %i is: %i\n", num, tot);
}
