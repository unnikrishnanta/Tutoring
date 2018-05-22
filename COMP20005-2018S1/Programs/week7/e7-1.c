/* Program to demonstrate e7.1
Written by: Unni on 19th April 2018
*/
#include<stdio.h>

#define MAX_SIZE 100

int read_int_array(int A[]);
int all_zero(int A[], int n);

int main(int argc, char const *argv[]) {
  int A[MAX_SIZE];
  int n = read_int_array(A);
  if(all_zero(A, n)){
    printf("The array contains all zeros\n");
  }
  else{
    printf("The array contains non-zero elemenets\n");
  }
  return 0;
}

int read_int_array(int A[]){
  int n=0;
  int num;
  int excess = 0;
  printf("Enter the numbers: ");
  while(scanf("%d", &num)==1){
    if(n>=MAX_SIZE){
      excess++;
    }
    else{
      A[n] = num;
      n++;
    }
  }
  printf("%d elements read\n", n);
  if(excess){
    printf("%d excess elements\n", excess);
  }
  return n;
}

int all_zero(int A[], int n){
  int i;
  for(i=0; i<n; i++){
    if(A[i] != 0){
      return 0;
    }
  }
  return 1;
}
