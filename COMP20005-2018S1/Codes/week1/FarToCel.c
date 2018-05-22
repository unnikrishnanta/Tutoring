/* The program converts stupid-american-temperature-measurement to Celsius
written by: Ruth Ryan-Boakes. 08/03/2018
*/
#include<stdio.h>

int
main(int argc, char **argv){
float temp;
char unit;
float cel;
float far;

  printf("Enter temperature:");
  scanf("%f %c", &temp, &unit);

if (unit == 'f'){
  cel=(temp-32)*(5.0/9.0);
  printf("The temperature in degrees celsius is: %f c\n", cel);
}
else if (unit == 'c'){
    far= ((temp*(9.0/5.0))+32);
    printf("The temperature in fahrenheit is: %f f\n",far);
}
else {
  printf("A invalid unit of temperature has been inputted, please try again");
}


return 0;
}
