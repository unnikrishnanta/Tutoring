#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct {
  double x;
  double y;
} vector_t;

double distance(vector_t *pt1, vector_t *pt2);

int main(int argc, char const *argv[]) {
  vector_t pt1, pt2;
  printf("Enter the points (x1, y1) (x2, y2):\n");
  scanf("(%lf,%lf) (%lf,%lf)", &(pt1.x), &pt1.y, &pt2.x, &pt2.y);
  double d = distance(&pt1, &pt2);
  printf("The distance is: %f\n", d);
  return 0;
}

double distance(vector_t *pt1, vector_t *pt2){
  double dist;
  dist = sqrt((pt1->x-pt2->x)*(pt1->x-pt2->x)
          +(pt1->y-pt2->y)*(pt1->y-pt2->y));
  return dist;
}
