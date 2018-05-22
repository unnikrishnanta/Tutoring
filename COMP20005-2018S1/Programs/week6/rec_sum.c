#include<stdio.h>
#include<stdlib.h>

int rsum(int n);

int main(int argc, char const *argv[]) {
  int num, sum;
  printf("Enter an integer: ");
  if(scanf("%d", &num)!= 1){
    printf("Invalid input\n");
    exit(EXIT_FAILURE);
  }
  sum = rsum(num);
  printf("Sum of %d natural numbers are: %d\n ", num, sum );
  return 0;
}

int rsum(int n){
  if(n<=0){ /* base case */
    return 0;
  }
  return n+rsum(n-1);
}
