#include <stdio.h>

void main() {

  int start;
  int end;
  int sum = 0;

  printf("Input the starting range:\n");
  scanf("%i", &start);

  printf("\nInput the ending range:\n");
  scanf("%i", &end);

  for (int i=start; i<=end; i++) {
    int j = 1;
    while (j <= i/2) {
      if (i % j == 0) {
        sum+=j;
      }
      j++;
    }
    if (sum == i) {
      printf("%i ", i);
    }
    sum=0;
  }
}
