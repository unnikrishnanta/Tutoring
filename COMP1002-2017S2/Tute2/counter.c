/*Program to count the number of characters and lines in the input
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  char c;
  int nlines = 0, nchars = 0;
  while ((c = getchar()) != EOF) {
    if(c == '\n')
      nlines += 1;
    nchars += 1;
  }
  printf("%d lines and %d chars\n", nlines, nchars);
  return 0;
}
