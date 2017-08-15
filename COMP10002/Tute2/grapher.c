#include<stdio.h>

#define MAX_RANGE 70

int main(int argc, char const *argv[]) {

  int i, num;
  printf("Enter the numbers: ");
  while(scanf("%d", &num)==1){
    if(num<1 || num>70){ /* Check for the condition on inputs */
      printf("%d is not between 1-70\n", num);
      continue;
    }
    printf("%2d |", num);
    for(i=0; i<num; i++){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
