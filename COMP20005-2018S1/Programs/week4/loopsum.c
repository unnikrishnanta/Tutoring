/* program to find the sum of a list of numbers.
Written by: Unni. Aug 7, 2017
*/
#include<stdio.h>

int main(int argc, char const *argv[]) {
  /* code */
  int sum = 0, num;

  printf("Enter the numbers: ");
  while(scanf("%d", &num) == 1) {
    sum += num;
  }

  printf("Sum of the numbers entered = %d\n", sum);
  return 0;
}
