/* Program to convert Farenheit to Celsuis
written by: Unni
*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  double input_temp, converted;
  char unit;

  printf("Enter the temperature in Farenheit: ");
  scanf("%lf%c", &input_temp, &unit);

  if(unit == 'F'){
      converted = (input_temp - 32)* 5.0/9;
      printf("%.2f%c maps to %.2f%c\n", input_temp, unit, converted, 'C');
  }
  else{
    if(unit == 'C'){
      converted = input_temp * 9.0/5 + 32;
      printf("%.2f%c maps to %.2f%c\n", input_temp, unit, converted, 'F');
    }

    else{
      printf("Wrong unit %c\n", unit);
      exit(0);
    }

  }



  return 0;
}
