/* Program to illustrate functions in C.
The function adds two numbers and return their sum
Written by: Unni. Aug.7, 2017
*/
#include<stdio.h>
#include<stdlib.h>

int add(int n1, int n2); /* Function declaration */

int main(int argc, char const *argv[]) {
  int num1, num2, sum;

  printf("Enter the numbers: ");
  if(scanf("%d%d", &num1, &num2) != 2){
    printf("Invalid input");
    exit(EXIT_FAILURE);
  }

  sum = add(num1, num2);
  printf("Sum of %d and %d = %d\n", num1, num2, sum);

  return 0;
}

/* Function definition */
int add(int n1, int n2){
  int s;

  s = n1+n2;
  return s;
}
