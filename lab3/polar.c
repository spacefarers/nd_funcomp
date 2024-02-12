// Fundamentals of Computing
// Created by Michael Yang on 2/5/24.
// polar coords calculation

#include <stdio.h>
#include <math.h>

int get_quadrant(double x, double y);
double get_radius(double x, double y);
double get_angle(double x, double y);
void show_info(int quadrant, double radius, double angle);

int get_quadrant(double x, double y){
	if (x > 0 && y > 0){
		return 1;
	} else if (x < 0 && y > 0){
		return 2;
	} else if (x < 0 && y < 0){
		return 3;
	} else {
		return 4;
	}
}

// This function takes in the x and y coordinates and returns the length of the line connecting the origin and the point
double get_radius(double x, double y){
	return sqrt(x*x + y*y);
}

// This function takes in the x and y coordinates and returns the angle between the x-axis and the line connecting the origin and the point
double get_angle(double x, double y){
	return atan(y/x)*180/M_PI;
}

// This function takes in the quadrant, radius, and angle and prints them out
void show_info(int quadrant, double radius, double angle){
	printf("The point is in quadrant %d\n", quadrant);
	printf("The radius is %.2f\n", radius);
	printf("The angle is %.2f\n", angle);
}

int main(){
	double x, y;
	printf("Enter the x and y coordinates: ");
	scanf("%lf %lf", &x, &y);
	int quadrant = get_quadrant(x, y);
	double radius = get_radius(x, y);
	double angle = get_angle(x, y);
	show_info(quadrant, radius, angle);
	return 0;
}