#include<stdio.h>

#define MAX_SIZE 100

int read_int_array(int A[]);
void print_int_array(int A[], int n);
void int_swap(int *p1, int *p2);
int find_max(int A[], int i);
void select_sort(int A[], int n);
void select_sort_rec(int A[], int n);

int main(int argc, char const *argv[]) {
  int A[MAX_SIZE];
  int n;
  n = read_int_array(A);
  select_sort_rec(A, n);
  print_int_array(A, n);
  return 0;
}

/* Store the inputs into array A and return
number of elements in A */
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
  printf("Elements in the array are: ");
  for(i=0; i<n; i++)
    printf("%d ", A[i]);
  printf("\n");
}

void int_swap(int *p1, int *p2) {
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int find_max(int A[], int i){
  int j;
  int max_index = i;
  for(j=i-1; j>=0; j--){
    if(A[j]>A[max_index]){
      max_index = j;
    }
  }
  return max_index;
}

void select_sort(int A[], int n){
  int i;
  int max_index;
  for(i=n-1; i>=0; i--){
    max_index = find_max(A, i);
    int_swap(A+i, A+max_index);
  }
}

void select_sort_rec(int A[], int n){
  int max_index;
  max_index = find_max(A, n-1);
  int_swap(A+max_index, A+n-1);
  if(n!=2){
    select_sort_rec(A, n-1);
  }
}
