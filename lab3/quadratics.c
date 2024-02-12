// Fundamentals of Computing
// Created by Michael Yang on 2/5/24.
// Continuously Compute Quadratics

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double get_determinant(double a, double b, double c);


// This function takes in the coefficients of the quadratic and returns the determinant for calculating the roots
double get_determinant(double a, double b, double c) {
	return b * b - 4 * a * c;
}

int main(){
	printf("Welcome to the quadratic equation solver! When you are done, enter 0 as a to end the program.\n");
	double a, b, c, determinant;
	while (true) {
		printf("Enter the coefficients of the quadratic in the format of \"a b c\": ");
		scanf("%lf %lf %lf", &a, &b, &c);
		if (a==0){
			printf("Thanks for using this program!\n");
			break;
		}
		determinant = get_determinant(a, b, c);
		if (determinant > 0) {
			printf("The roots are: %.2f and %.2f\n", (-b + sqrt(determinant)) / (2 * a), (-b - sqrt(determinant)) / (2 * a));
		} else {
			printf("The roots are complex\n");
		}
	}
	return 0;
}
