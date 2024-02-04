// Fundamentals of Computing
// Created by Michael Yang on 1/29/24.
// Mortgage Calculator

#include <stdio.h>
#include <math.h>

int main(){
    double initial_amount, interest_rate, monthly_payment, time_length;
    printf("Enter the initial amount of the loan: $");
    scanf("%lf", &initial_amount);
    printf("Enter the interest rate as a percentage: ");
    scanf("%lf", &interest_rate);
    interest_rate /= 100;
    printf("Enter the monthly payment: $");
    scanf("%lf", &monthly_payment);
    printf("\n");
    // Check for invalid input
    if (initial_amount <= 0 || interest_rate <= 0 || monthly_payment <= 0) {
        printf("One of your inputs is less than or equal to 0!\n");
        return 0;
    }
    if (monthly_payment < initial_amount * interest_rate / 12) {
        printf("Your monthly payment is too low! You'll never pay it back!\n");
        return 0;
    }


    // Amortization Table
    printf("Month\t\tPayment\t\tInterest\t\tBalance\n");
    double balance = initial_amount,total_amount=0;
    int month = 0;
    while (balance > 0) {
        month++;
        double interest = balance * interest_rate / 12;
        balance += interest;
        balance -= monthly_payment;
        if (balance < 0) {
            monthly_payment += balance;
            balance = 0;
        }
        printf("%d\t\t$%.2lf\t\t$%.2lf\t\t$%.2lf\n", month, monthly_payment, interest, balance);
        total_amount += monthly_payment;
    }
    printf("You paid a total of $%.2lf over %d years and %d months.\n", total_amount, month / 12, month % 12);
}
