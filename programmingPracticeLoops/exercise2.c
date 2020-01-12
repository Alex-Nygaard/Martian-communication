#include <stdio.h>

void main() {

  int num;

  printf("Input number of terms:\n");
  scanf("%i", &num);

  for (int i=1;i<=num;i++) {
    printf("Number is: %i and cube of the %i is: %i\n", i, i, i*i*i);
  }
}
