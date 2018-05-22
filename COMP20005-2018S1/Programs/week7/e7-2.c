#include<stdio.h>

#define MAX_SIZE 100

int read_int_array(int A[]);
void print_int_array(int A[], int n);

void int_swap(int *p1, int *p2);
void sort_int_array(int A[], int n) ;
/*int reduce_int_array(int A[], int n);*/

int main(int argc, char const *argv[]) {
  int A[MAX_SIZE];
  int n;
  n = read_int_array(A);
  sort_int_array(A, n);
  print_int_array(A, n);
  return 0;
}

/* Store the inputs into array A and return number of elements in A */
int read_int_array(int A[]){
  int num, k=0;
  int excess = 0;

  printf("Enter the values: ");
  while(scanf("%d", &num) == 1){
    if(k>=MAX_SIZE)
      excess++;
    else{
      A[k] = num;
      k++;
    }
  }
  printf("%d values read into array\n", k);
  return k;
}

/* Prints the elements in array A */
void print_int_array(int A[], int n){
  int i;
  for(i=0; i<n; i++)
    printf("%2d", A[i]);
  printf("\n");
}


void sort_int_array(int A[], int n) {
	int i, j;
	for (i=1; i<n; i++) {
		for (j=i-1; j>=0 && A[j+1]>A[j]; j--) {
				int_swap(&A[j], &A[j+1]);
		}
	}
}

void int_swap(int *p1, int *p2) {
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int reduce_int_array(int A[], int n){
  int newn = 1;
  int i;
  for(i=1; i<n; i++){
    if(A[i] != A[newn-1]){
      A[newn] = A[i];
      newn++;
    }
  }
  return newn;
}
