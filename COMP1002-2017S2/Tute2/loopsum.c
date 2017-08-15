/* program to find the sum of a list of numbers.
Written by: Unni. Aug 7, 2017
*/
#include<stdio.h>

int main(int argc, char const *argv[]) {
  /* code */
  int i =0 , sum = 0, num;

  printf("Enter the numbers: ");
  while(scanf("%d", &num) == 1) {
    sum += num;
    i = i+1;
  }

  printf("Sum of %d items entered = %d\n", i, sum);
  return 0;
}
