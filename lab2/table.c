// Fundamentals of Computing
// Created by Michael Yang on 1/29/24.
// Multiplication Table

#include <stdio.h>
#include <math.h>

int main(){
    int X, Y;
    printf("Enter the dimensions of the table in the format of \"X Y\": ");
    scanf("%d %d", &X, &Y);
    // Header
    printf("*\t\t");
    for (int i = 1; i <= X; i++) {
        printf("%d\t", i);
    }
    printf("\n");
    // Divider
    for (int i = 0; i <= X+1; i++) {
        if (i==0) printf("\t");
        else printf("----");
    }
    printf("\n");
    // Table
    for (int i = 1; i <= Y; i++) {
        printf("%d\t|\t", i);
        for (int j = 1; j <= X; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}
