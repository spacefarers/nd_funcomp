// Fundamentals of Computing
// Created by Michael Yang on 2/12/24.
// A simple array

#include <stdio.h>
#include <math.h>

// function prototypes ...
float grade_average(int grades[], int size);

float grade_stddev(int grades[], int size, float avg);

int main() {
    int grades[] =
            {96, 73, 62, 87, 80, 63, 93, 79, 71, 99,
             82, 83, 80, 97, 89, 82, 93, 92, 95, 89,
             71, 97, 91, 95, 63, 81, 76, 98, 64, 86,
             74, 79, 98, 82, 77, 68, 87, 70, 75, 97,
             71, 94, 68, 87, 79};

    int effective_array_size = sizeof(grades) / sizeof(grades[0]);
    float avg = grade_average(grades, effective_array_size);
    float stddev = grade_stddev(grades, effective_array_size, avg);
    printf("Effective Array Size: %d\n", effective_array_size);
    printf("The average grade is %.2f\n", avg);
    printf("The standard deviation is %.2f\n", stddev);


    return 0;
}

// function definitions ...
// This function takes in an array of grades and its size and returns the average of the grades
float grade_average(int grades[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    return sum / size;
}

// This function takes in an array of grades, its size, and the average of the grades and returns the standard deviation
float grade_stddev(int grades[], int size, float avg) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += pow(grades[i] - avg, 2);
    }
    return sqrt(sum / size);
}