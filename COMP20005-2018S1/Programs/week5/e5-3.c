/* Program to illustrate int_pow from exercise 5.3
  Written by: Jianzhong Qi,  March 2013.
  Modified by: Unni, March 2018.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

int int_pow(int base, int exponent);

int
main(int argc, char **argv) {

	int base, exponent, power;
	/* get two integers */
	printf("Enter the base and the exponent: ");
	if ((scanf("%d %d", &base, &exponent)!=2) ) {
		printf("Error in input\n");
		exit(EXIT_FAILURE);
	}

	/* scaffolding to call the function */
	power = int_pow(base, exponent);
	printf("%d^%d = %d\n", base, exponent, power);

	return 0;
}


/* compute and return 'base' to the power of 'exponent' */
int
int_pow(int base, int exponent) {
	int res = 1;
	int i;
	for(i=0; i<exponent; i++){
		if(abs(INT_MAX/base) >= abs(res)){
			printf("Overflow\n");
			exit(EXIT_FAILURE);
		}
		res = res * base;
	}
	return res;
}
