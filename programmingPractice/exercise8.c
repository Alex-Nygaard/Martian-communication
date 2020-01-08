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

    if (ang1 == ang2 && ang2 == ang3) {
      printf("The triangle is Equilateral");
    } else if (ang1 == ang2 || ang2 == ang3 || ang3 == ang1) {
      printf("The triangle is Isosceles");
    } else {
      printf("The triangle is Scalene");
    }

  }
  printf("\n");
}
