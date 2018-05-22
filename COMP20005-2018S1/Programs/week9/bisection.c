#include <stdio.h>
#include <stdlib.h>

#define NOT_CONVERGING 2

double z;

double
f(double x) {
    return x * x - z;
}

double
bisection(double x1, double x2, double eps, int limit) {
    double fx1, fx2, mid, fmid;
    int iterations=0;
    fx1 = f(x1);
    fx2 = f(x2);
    while (x2-x1 > eps) {
        iterations = iterations+1;
        if (iterations==limit) {
            exit(NOT_CONVERGING);
        }
        mid = (x1+x2)/2;
        fmid = f(mid);
        if (fx1*fmid < 0) {
            /* root is to left of middle */
            x2 = mid;
            fx2 = fmid;
        } else {
            x1 = mid;
            fx1 = fmid;
        }
    }
    printf("(bisection) eps=%.1e, iterations=%d\n",
            eps, iterations);
    return (x1+x2)/2;
}

int main(int argc, char **argv) {
    double eps, x;

    if (argc < 3) {
        printf("usage: %s number eps\n", argv[0]);
        printf("prints the square root of number to a precision of eps\n");
        printf("uses bisection with hard coded limit of 100 iterations\n");
        exit(EXIT_FAILURE);
    }
    z = atof(argv[1]);
    eps = atof(argv[2]);
    x = bisection(0, z, eps, 100);
    printf("sqrt(%lf) = %lf\n", z, x);
    return 0;
}
