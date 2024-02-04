// Fundamentals of Computing
// Created by Michael Yang on 1/29/24.
// Reverse Digits

#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    printf("The reversed number is %d\n", reversed);
}
