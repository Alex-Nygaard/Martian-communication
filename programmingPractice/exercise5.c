#include <stdio.h>

void main() {

  int X;
  int Y;


  printf("Enter X coordinate:\n");
  scanf("%i", &X);
  printf("Enter Y coordinate:\n");
  scanf("%i", &Y);
  
  if (X > 0) {
    if (Y > 0) {
      printf("The coordinate point (%i,%i) lies in the First quadrant", X, Y);
    } else if (Y < 0) {
      printf("The coordinate point (%i,%i) lies in the Fourth quadrant", X, Y);
    } else {
      printf("The coordinate point (%i,%i) lies on the X-axis", X, Y);
    }
  } else if (X < 0) {
    if (Y > 0) {
      printf("The coordinate point (%i,%i) lies in the Second quadrant", X, Y);
    } else if (Y < 0) {
      printf("The coordinate point (%i,%i) lies in the Third quadrant", X, Y);
    } else {
      printf("The coordinate point (%i,%i) lies on the X-axis", X, Y);
    }
  } else {
      printf("The coordinate point (%i,%i) lies on the Y-axis", X, Y);
  }
}
