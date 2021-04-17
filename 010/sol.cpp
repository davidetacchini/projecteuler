#include <iostream>
#include "../utils/utils.hpp"

int main() {
    const int limit = 2000000;
    long sum = 2; // the only prime even number

    // only iterate through odd numbers
    for (int i = 3; i < limit; i+=2) {
        if (is_prime(i)) {
           sum += i; 
        }
    }
    std::cout << sum;
}

