#include <stdio.h>

void main() {

  int phys;
  int chem;
  int math;

  printf("Enter Grade in Physics:\n");
  scanf("%i", &phys);
  printf("Enter Grade in Chemistry:\n");
  scanf("%i", &chem);
  printf("Enter Grade in Mathematics:\n");
  scanf("%i", &math);
  
  if ( (phys + chem + math >= 180 || math + phys >= 140) && (math >= 65 && phys >= 55 && chem >= 50) ) {
    printf("The candidate is eligible for admission");
  } else {
    printf("The candidate is not eligible for admission");
  }
}
