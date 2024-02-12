// Fundamentals of Computing
// Created by Michael Yang on 2/5/24.
// Menu Calculator

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
void demux_and_select(int op, double a, double b);

// These functions take in two numbers and return the result of the operation, operations are self-explanatory
double add(double a, double b) {
	return a + b;
}
double subtract(double a, double b) {
	return a - b;
}
double multiply(double a, double b) {
	return a * b;
}
double divide(double a, double b) {
	return a / b;
}

// This function takes in the operation and the two numbers and selects the correct operation to perform
void demux_and_select(int op, double a, double b){
	switch (op) {
		case 1:
			printf("The result is: %.2f\n", add(a, b));
			break;
		case 2:
			printf("The result is: %.2f\n", subtract(a, b));
			break;
		case 3:
			printf("The result is: %.2f\n", multiply(a, b));
			break;
		case 4:
			printf("The result is: %.2f\n", divide(a, b));
			break;
		default:
			printf("Invalid operation\n");
	}
}

int main() {
	printf("Welcome to the menu calculator! When you are done, enter 0 as a to end the program.\n");
	double a, b;
	int op;
	while (true) {
		printf("1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Quit Program\n");
		printf("Enter the operation you would like to perform: ");
		scanf("%d", &op);
        // If the user enters 5, the program will end
		if (op==5){
			printf("Thanks for using this program!\n");
			break;
		}
        // Check if the operation is invalid
		if (op < 1 || op > 4) {
			printf("Invalid operation\n");
			continue;
		}
		printf("Enter the two numbers to perform the operation on: ");
		scanf("%lf %lf", &a, &b);
		demux_and_select(op, a, b);
	}
	return 0;
}
