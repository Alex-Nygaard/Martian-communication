#include <stdio.h>
#include <string.h>

void main() {

  char mystr[60];
  int len, g;

  printf("Input a string:\n");
  scanf("%s", &mystr);

  len = strlen(mystr);

  for(g = len - 1; g >= 0; g--) {
      printf("%c", mystr[g]);
  }
  printf("\n");
  
}
