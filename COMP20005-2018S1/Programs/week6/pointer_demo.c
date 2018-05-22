#include<stdio.h>

void p_fun(int *num_p);

int main(int argc, char const *argv[]) {
  int num = 10;
  printf("Before p_fun():\n");
  printf("num = %d\n", num);
  printf("&num = %p\n\n", &num);

  p_fun(&num);

  printf("After p_fun():\n");
  printf("num = %d\n", num);
  printf("&num = %p\n\n", &num);
  return 0;
}

void p_fun(int *num_p){
  printf("In p_fun():\n");
  printf("num_p = %p\n", num_p);
  printf("*num_p = %d\n", *num_p);
  printf("&num_p = %p\n\n", &num_p);

  *num_p = *num_p+1;
}
