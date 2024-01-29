//
// Created by Michael Yang on 1/29/24.
// Sum of squares and sum of square roots

#include <stdio.h>
#include <math.h>

int main(){
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    double sum_squares = 0;
    double sum_roots = 0;
    for (int i = 1; i <= num; i++) {
        sum_squares += pow(i, 2);
        sum_roots += sqrt(i);
    }
    printf("The sum of squares is %lf\n", sum_squares);
    printf("The sum of square roots is %lf\n", sum_roots);
}
