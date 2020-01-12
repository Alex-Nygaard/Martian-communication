#include <stdio.h>

void main() {

  int num;
  int sum = 0;

  printf("Input 10 numbers:\n");
  printf("======\n");

  for (int i=0; i<10; i++) {
    printf("Num %i: ", i+1);
    scanf("%i", &num);

    sum += num;
  }

  printf("The sum is %i", sum);

  float avg = sum/10.0;

  printf("The average is %f", avg);
}
