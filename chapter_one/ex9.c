#include <stdio.h>

#define YES 1
#define NO 0

int main(void)
{
  int c;
  int b;

  b = NO;
  while ((c = getchar()) != EOF) {
    if (c != ' ')
      b = NO;
    if (!b)
      putchar(c);
    if (c == ' ')
      b = YES;
  }

  return 0;
}
