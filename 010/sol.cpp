#include <iostream>
#include "../utils/utils.hpp"

int main() {
    const int n = 2000000;
    long sum = 2;

    for (int i = 3; i < n; i+=2) {
        if (is_prime(i)) {
           sum += i; 
        }
    }
    std::cout << sum;
}
