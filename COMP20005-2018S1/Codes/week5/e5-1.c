/* Program to demonstrate max_2ints() from the exercise
Written by: Unni, 27 March */

#include<stdio.h>
#include<stdlib.h>

int max_2ints(int num1, int num2); /* Prototype declaration*/
int max_4ints(int num1, int num2, int num3, int num4);

int main(int argc, char const *argv[]) {
  int n1, n2, n3, n4;
  int max_n;
  printf("Enter four integers:");
  if(scanf("%d%d%d%d", &n1, &n2, &n3, &n4) != 4){
    printf("Error in input\n");
    exit(EXIT_FAILURE);
  }

  max_n = max_4ints(n1, n2, n3, n4);
  printf("The max is: %d\n", max_n);
  return 0;
}

int max_2ints(int num1, int num2){
  if(num1>num2)
    return num1;

  return num2;

}


int max_4ints(int num1, int num2, int num3, int num4){
  /* int max1, max2; */
  /*max1 = max_2ints(num1, num2);
  max2 =  max_2ints(num3, num4);
  return max_2ints(max1, max2);*/
  return max_2ints(max_2ints(num1, num2),
                  max_2ints(num3, num4));
}
