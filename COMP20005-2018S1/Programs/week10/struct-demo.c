/* Program to demonstrate struct types in C.
Written by: Unni on 08/05/2018
*/
#include<stdio.h>
#include<string.h>

#define NAMESTRLEN 40
typedef char namestr[NAMESTRLEN+1];


typedef struct{
  int dd, mm, yy;
} date_t;

typedef struct {
  namestr first_name;
  namestr last_name;
  date_t date_enrolled;
} person_t;


int main(int argc, char const *argv[]) {

  date_t today;
  today.dd = 10;
  today.mm = 5;
  today.yy = 2018;
  printf("Today is: %02d/%02d/%02d\n", today.dd, today.mm, today.yy);
  printf("Size of date_t: %lu\n", sizeof(date_t));
  printf("Size of person_t: %lu\n", sizeof(person_t));

  person_t person1;
  person1.date_enrolled.dd;

  return 0;
}
