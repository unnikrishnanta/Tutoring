#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX_NUM 10

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int i, r;
  printf("Random numbers between 0 and %d are: ", MAX_NUM);
  for(i=0; i<MAX_NUM; i++){
    r = rand()%MAX_NUM;
    printf("%d ", r);
  }
  printf("\n");
  return 0;
}
