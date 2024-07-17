#include <iostream>
#include <vector>

void sieveOfEratosthenes(int n) {
    std::vector<bool> prime(n+1, true); // Create a boolean vector to track prime numbers
    prime[0] = prime[1] = false; // 0 and 1 are not prime numbers

    // Mark all multiples of prime numbers as non-prime
    for (int p = 2; p * p <= n; ++p) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    // Print prime numbers
    for (int p = 2; p <= n; ++p) {
        if (prime[p]) {
            std::cout << p << " ";
        }
    }
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Prime numbers up to " << n << " are: ";
    sieveOfEratosthenes(n);
    std::cout << std::endl;

    return 0;
}
