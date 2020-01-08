#include <stdio.h>

void main() {

  int num;

  printf("Enter your age:\n");
  scanf("%i", &num);
  if (num >= 18) {
    printf("You can vote\n");
  }  else {
    printf("You cannot vote\n");
  }
}
