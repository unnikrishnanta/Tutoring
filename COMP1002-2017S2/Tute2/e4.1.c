/* Program to trace the action of loops.
Written by: Unni. Aug 6th, 2017.
*/

#include<stdio.h>

int
main(int argc, char const *argv[]) {
  int i, j, sum;
  /* Part a */
  /*for(i=0; i<101; i++){
    printf("%2d\n", i);
  }*/

  /* Part b */
  /*for(i=1; i<20000000; i = 2*i){
    printf("%8d\n", i);
  }*/

  /* Part c */
  /*sum = 0;
  for(i=1; i<10; i++){
    sum = sum+i;
    printf("S(%2d) = %2d\n", i, sum);
  } */

  /* Part d */
  /*for(i=0; i<8; i++){
    for(j=i+1; j<8; j+=3){
      printf("i=%d, j=%d\n", i, j);
    }
  } */

  /* Part e */
  /*for(i=0; i<8; i++){
    for(j=i+1; j<8; j+=3){
      if(i+j == 7){
        break;
      }
      printf("i=%d, j=%d\n", i, j);
    }
  }*/

  /* Part f */
  /*j = 5;
  for(i=0; i<j; i++);{
    printf("i=%d, j=%d\n", i, j);
  }*/

  j = 5;
  for(i=0; i<j; j++){
    printf("i=%d, j=%d\n", i, j);
  } 
  return 0;
}
