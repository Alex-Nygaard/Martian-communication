#include <stdio.h>

void main() {

  int ang1;
  int ang2;
  int ang3;

  printf("Enter the angles of the triangle in format \"XX YY ZZ\":\n");
  scanf("%i %i %i", &ang1, &ang2, &ang3);
  
  if (ang1 + ang2 + ang3 != 180) {
    printf("Not a valid triangle");
  } else {
    printf("The triangle is valid");
  }
  printf("\n");
}
