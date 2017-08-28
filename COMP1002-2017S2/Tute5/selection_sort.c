/* Exercise 7.6 in Programming, Problem Solving, and Abstraction
   Read an a set of numbers, sort using selection sort.
   Written by Unni
*/

#include <stdio.h>

#define MAXVALS 1000

/* function prototypes */
int read_int_array(int A[]);
int max_position(int A[], int n);
void selection_sort(int A[], int n);
void selection_sort_rec(int A[], int n);
void swap(int *n1, int *n2);

int main(int argc, char const *argv[]) {
	int A[MAXVALS], n, i;

	printf("Enter the numbers: ");
	n = read_int_array(A);
	printf("The numbers are \t:");
	for(i=0; i<n; i++)
		printf("%d ", A[i]);
	printf("\n");

	/* Numbers sorted using simple selection sort */
	selection_sort(A, n);
	printf("Sorted numbers are \t:");
	for(i=0; i<n; i++)
		printf("%d ", A[i]);
	printf("\n");

	/* Numbers sorted using a recursive implementation of selection sort */
	selection_sort_rec(A, n);
	printf("Recursively sorted numbers are \t:");
	for(i=0; i<n; i++)
		printf("%d ", A[i]);
	printf("\n");

	return 0;
}

int read_int_array(int A[]){
	int num, count = 0;
	while (scanf("%d", &num) == 1) {
		if(count < MAXVALS)
      A[count++] = num;
	}
	return count;
}

void swap(int *n1, int *n2){
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

/* A simple implementation of selection sort matching with the
psedo code discussed in the tute */
void selection_sort(int A[], int n){
	int i, j, max;
	for(i=n-1; i>0; i--){
		max = 0;
		for(j=0; j<= i; j++){
			if(A[j] > A[max])
				max = j;
		}
		swap(A+max, A+i);
	}
}

/* A dedicated function to get the index of the maximum element */
int max_position(int A[], int n){
	int i, max;
	max = 0;
	for(i=1; i<n; i++){
		if(A[i]> A[max])
			max = i;
	}
	return max;
}

/* A recursive implementation of selection sort */
void selection_sort_rec(int A[], int n){
	int max;
	if(n>1){
		max = max_position(A, n);
		swap(A+max, A+n-1);
		selection_sort_rec(A, n-1);
	}
}
