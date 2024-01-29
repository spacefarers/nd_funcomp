//
// Created by Michael Yang on 1/29/24.
// ASCII Plot of Equation

#include <stdio.h>
#include <math.h>

double equation(double x){
    return sin(x)*x;
}

int main(){
    double start=-10, end=10, step=0.1;
    int width_allowed=100;
    printf("x\t\tf(x)\n");
    // check min max
    double min_num=INFINITY, max_num=-INFINITY;
    for (double x = start; x <= end; x += step) {
        double y = equation(x);
        if (y > max_num) max_num = y;
        if (y < min_num) min_num = y;
    }
    double step_size = (max_num - min_num) / width_allowed;
    for (double x = start; x <= end; x += step) {
        printf("%lf\t%lf\t", x, equation(x));
        for (int i = 0; i < (equation(x) - min_num) / step_size; i++) {
            printf("*");
        }
        printf("\n");
    }
}
