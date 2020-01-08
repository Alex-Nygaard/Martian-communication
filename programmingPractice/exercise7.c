#include <stdio.h>

void main() {

  int temp;

  printf("Enter the Temperature:\n");
  scanf("%i", &temp);
  
  if (temp < 0) {
    printf("Freezing weather");
  } else if (0 <= temp && temp < 10) {
    printf("Very cold weather");
  } else if (10 <= temp && temp < 20) {
    printf("Cold weather");
  } else if (20 <= temp && temp < 30) {
    printf("Normal inside temp");
  } else if (30 <= temp && temp < 40) {
    printf("Its hot");
  } else {
    printf("Its very hot");
  }
  
  printf("\n");
}
