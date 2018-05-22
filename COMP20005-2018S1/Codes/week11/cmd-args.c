/* Program to demonstrate the use of command-line arguments.
Written by: Unni on 15 May 2018
*/
#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]) {
  int i;
  for(i=0; i<argc; i++){
    printf("argv[%d] is: %s\n", i, argv[i]);

  }
  float num = atof(argv[1]);
  printf("%f\n", num);
  return 0;
}
