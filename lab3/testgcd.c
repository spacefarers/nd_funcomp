// Fundamentals of Computing
// Created by Michael Yang on 2/5/24.
// Calculate GCD

#include <stdio.h>
#include <math.h>

int get_gcd(int a, int b);


// This function takes in two numbers and returns the greatest common divisor
int get_gcd(int a, int b) {
	int gcd;
	for (int i=1;i<=((a<b)?b:a);i++){
		if (a%i==0 && b%i==0){
            // If the current number is a divisor of both a and b, then it is the greatest common divisor so far
			gcd = i;
		}
	}
	return gcd;
}

int main() {
	int a, b;
	printf("Enter two numbers to compute GCD with: ");
	scanf("%d %d", &a, &b);
	printf("The GCD of %d and %d is %d\n", a, b, get_gcd(a, b));
	return 0;
}