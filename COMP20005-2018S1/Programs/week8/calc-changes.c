/* Program to solve calculatechange using arrays and loops
Written by: Unni. 24/04/2018
*/

#include<stdio.h>
#include<stdlib.h>

#define FIFTY 50
void print_change(int denom, int n);

int main(int argc, char const *argv[]) {
    int denoms[] = {FIFTY, 20, 10, 5, 2, 1};
    int amount;
    printf("Enter the amount: ");
    if(scanf("%d", &amount)!=1){
      printf("Invalid input\n");
      exit(0);
    }
    int i;
    int ncoins;
    printf("The coins required for %d are: \n", amount);
    for(i=0; i<6; i++){
      ncoins = amount/denoms[i];
      print_change(denoms[i], ncoins);
      amount = amount%denoms[i];
    }
    printf("\n");
    return 0;
}

void print_change(int denom, int n){
  int i;
  for(i=0; i<n; i++){
    printf("%d, ", denom);
  }
}
