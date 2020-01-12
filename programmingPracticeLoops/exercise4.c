#include <stdio.h>

void main() {

  int num;

  printf("Input number of terms:\n");
  scanf("%i", &num);

  float tot = 1.0;

  for (int i=2;i<=num;i++) {
    tot += 1/(float)i;
  }

  printf("Sum of the series up to 5 terms: %f", tot);
}
