#include <stdio.h>
#include <stdlib.h>

#define MAX_CHANGE 999

#define COIN3 50
#define COIN4 20
#define COIN5 10
#define COIN6 5

/* function prototypes */
int try_one_coin(int *cents, int coin);
int round_to_5(int cents);
void print_change(int cents);

int
main(int argc, char *argv[]) {

	int amount;

	/* get the input value */
	printf("Enter amount in cents: ");
	if (scanf("%d", &amount)!=1 || (amount<0) || (amount>MAX_CHANGE)) {
		printf("Error in input\n");
		exit(EXIT_FAILURE);
	}

	/* do the work */
	print_change(round_to_5(amount));

	return 0;
}


/* https://goo.gl/ZDMKRd */
