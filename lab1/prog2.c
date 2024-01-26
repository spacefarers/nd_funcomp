//
// Created by Michael Yang on 1/22/24.
// Gravitational Force Formula

#include <stdio.h>
#include <math.h>

int main(){
    double mass1, mass2, distance;
    double gravitational_constant = 6.674 * pow(10, -11);
    // Get user input for mass1, mass2, and distance
    printf("Enter the mass of the first object (kg): ");
    scanf("%lf", &mass1);
    printf("Enter the mass of the second object (kg): ");
    scanf("%lf", &mass2);
    printf("Enter the distance between the two objects (m): ");
    scanf("%lf", &distance);
    // F = G * (m1 * m2) / d^2
    double force = gravitational_constant * ((mass1 * mass2) / pow(distance, 2));
    printf("The gravitational force between the two objects is %lf N\n", force);
    return 0;
}