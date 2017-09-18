/* Program for calculating euclidean distance between two points
Written by: Unni
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct {
  double x;
  double y;
} vector_t;

double distance(vector_t pt1, vector_t pt2);

int main(int argc, char const *argv[]) {
  vector_t pt1, pt2;
  double result;
  printf("Enter the points (x1, y1) (x2, y2)\n");
  if(scanf("(%lf, %lf) (%lf, %lf)", &pt1.x, &pt1.y, &pt2.x, &pt2.y) != 4){
    printf("Invalid Input\n");
    exit(EXIT_FAILURE);
  }
  result = distance(pt1, pt2);
  printf("The distance between (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n", pt1.x,
          pt1.y, pt2.x, pt2.y, result);
  return 0;
}


double distance(vector_t pt1, vector_t pt2){
  double delta1, delta2;

  delta1 = pt1.x - pt2.x;
  delta2 = pt1.y = pt2.y;

  return(sqrt(delta1*delta1 + delta2*delta2));
}
