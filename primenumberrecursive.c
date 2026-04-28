#include <stdio.h>

int isPrime(int n, int i) {
    if (n <= 1) // numbers <=1 are not prime
        return 0;
    if (i == n) // reached the end, no divisors found
        return 1;
    if (n % i == 0) // divisible → not prime
        return 0;

    return isPrime(n, i + 1); // check next divisor
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n, 3))
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    return 0;
}

