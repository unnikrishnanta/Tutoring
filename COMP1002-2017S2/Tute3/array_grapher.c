/* A modification of exercise 4.5 using arrays.
Written by: Unni */

#include<stdio.h>

#define MAX_SIZE 5
#define MAX_RANGE 70

int main(int argc, char const *argv[]) {
  int i, j, count =0, num, excess = 0;
  int num_array[MAX_SIZE];

  printf("Enter the numbers: ");
  while(scanf("%d", &num)==1){
    if(num<1 || num>70){ /* Check for the condition on inputs */
      printf("%d is not between 1-70\n", num);
      continue;
    }
    if(count >= MAX_SIZE)
      excess++;
    else{
      num_array[count++] = num;
    }
  }

  printf("Numbers read: %d excess inputs: %d\n", count, excess);
  for(i=0; i< count; i++){
    printf("%2d |", num_array[i]);
    for(j=0; j<num_array[i]; j++){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
