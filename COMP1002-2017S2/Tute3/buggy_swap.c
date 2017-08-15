/* Program to show how function arguments passed as value instead of
references are not modified by the called function.
Written by: Unni */
#include <stdio.h>
#include <stdlib.h>

void wrong_swap(int num1, int num2);

int main(int argc, char const *argv[]) {

  int n1, n2;
  printf("Enter two numbers: ");
  if(scanf("%d%d", &n1, &n2) != 2){
    printf("Wrong input\n");
    exit(EXIT_FAILURE);
  }
  printf("main: Before wrong_swap numbers are %d and %d\n", n1, n2);
  wrong_swap(n1, n2);
  printf("main: Thanks wrong_swap. Now the numbers are %d and %d\n", n1, n2);
  return 0;
}

void wrong_swap(int num1, int num2){
  int temp;
  temp = num1;
  num1 = num2;
  num2 = temp;
  printf("wrong_swap: I am done! the numbers are %d and %d\n", num1, num2);
}
