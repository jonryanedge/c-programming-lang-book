#include <stdio.h>

/* count characters in input; 1st version */

int main(void) {
  long nc;

  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);
}

/* count characters in input; 2nd version */

int main(void) {
  double nc;

  for (nc = 0; getchar() != EOF; ++nc);
  printf("%.0f\n", nc);
}
