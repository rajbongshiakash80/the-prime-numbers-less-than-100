#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) {
        return false; // Numbers less than 2 are not prime
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false; // Not a prime number
        }
    }

    return true; // Prime number
}

int main() {
    // Generate and print prime numbers less than 100
    printf("Prime numbers less than 100:\n");

    for (int i = 2; i < 100; ++i) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}