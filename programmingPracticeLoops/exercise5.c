#include <stdio.h>

void main() {

  int num;

  printf("Input number of terms:\n");
  scanf("%i", &num);

  int term = 1;
  int tot = 1;

  for (int i=2; i <= num; i++) {
    term = term * 10 + 1;
    printf("%i + ", term);
    tot += term;
  }

  printf("\nThe sum is: %i", tot);
}
