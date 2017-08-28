/* Program to recursively sum an array
Written by: Unni
*/
#include<stdio.h>

#define MAXVALS 1000

int rec_sum(int A[], int n);
int read_int_array(int A[]);

int main(int argc, char const *argv[]) {
  int A[MAXVALS], n;
  printf("Enter the numbers: ");
  n = read_int_array(A);

  printf("Sum is %d\n", rec_sum(A, n-1));
}

int read_int_array(int A[]){
	int num, count = 0;
	while (scanf("%d", &num) == 1) {
    if(count < MAXVALS)
      A[count++] = num;
	}
	return count;
}


int rec_sum(int A[], int n){

  if(n==0)
    return A[0];

  return A[n] + rec_sum(A, n-1);


}
