// Fundamentals of Computing
// Created by Michael Yang on 2/12/24.
// Sieve of Eratosthenes

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    bool primes[1000];
    // initialize the array with True and we invalidate them later
    for (int i = 0; i <= 999; i++) {
        primes[i] = true;
    }
    // Ignore 0 and 1: set to false to not print at the end
    primes[0] = false;
    primes[1] = false;
    for (int i = 2; i <= sqrt(999); i++) {
        // if the number is prime, then we invalidate all of its multiples
        if (primes[i]) {
            for (int j = i * i; j <= 999; j += i) {
                primes[j] = false;
            }
        }
    }
    // print 10 in a row
    int count = 0;
    for (int i = 0; i <= 999; i++) {
        if (primes[i]) {
            printf("%4d\t", i);
            count++;
            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }
    return 0;
}