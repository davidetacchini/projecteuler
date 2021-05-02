#include <iostream>
#include "../utils/utils.hpp"

int main() {
    int primes = 1;
    int number = 1;

    while(primes <= 10000) {
        number += 2;
        if (is_prime(number)) {
            primes++;
        }
    }
    std::cout << number;
}
