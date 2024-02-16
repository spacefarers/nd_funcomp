// Fundamentals of Computing
// Created by Michael Yang on 2/5/24.
// rectangle.c
#include <stdio.h>

double calculate_perimeter(double len, double wid);
double calculate_area(double len, double wid);

double calculate_perimeter(double len, double wid) {
	double perim;
	perim = 2 * (len + wid);
	return perim;
}
double calculate_area(double len, double wid) {
	double area;
	area = len * wid;
	return area;
}

int main()
{
	float len, wid;
	double perim, area;
	printf("enter the rectangle's length and width: ");
	scanf("%f %f", &len, &wid);
	perim = calculate_perimeter(len, wid);
	area = calculate_area(len, wid);
	printf("the perimeter is: %.2f\n", perim);
	printf("the area is: %.2f\n", area);

	return 0;
}
