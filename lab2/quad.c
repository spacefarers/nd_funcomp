//
// Created by Michael Yang on 1/29/24.
// Quadratic Equation

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, disc;
    double x1, x2;

    printf("Enter the coefficients (a,b,c) of a quadratic equation: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    disc = pow(b, 2) - (4 * a * c);
    if (disc < 0) {
        printf("The roots are imaginary\n");
        return 0;
    }
    x1 = (-b + sqrt(disc)) / (2 * a);
    x2 = (-b - sqrt(disc)) / (2 * a);
    printf("The roots are %lf and %lf\n", x1, x2);
    return 0;
}
