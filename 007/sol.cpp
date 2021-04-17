#include <iostream>
#include "../utils/utils.hpp"

int main() {
    int total_primes = 1;
    int number = 1;

    while(total_primes < 10001) {
        number += 2;
        if (is_prime(number)) {
            total_primes++;
        }
    }
    std::cout << number;
}
