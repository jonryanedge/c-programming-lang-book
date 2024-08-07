/* Section 1.5 */
#include <stdio.h>

/* copy input to output; 1st version */

int main(void) {
  print("1.5.1 - File Copying")
  int c;

  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}

/* copy input to output; 2nd version */

int main(void) {
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);
}

