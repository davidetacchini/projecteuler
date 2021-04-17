#include <iostream>

int main() {
    long number = 600851475143;
    int divider = 2;

    while (number > 1) {
        if (number % divider == 0) {
            number /= divider;
        }
        else {
            divider += 1;
        }
    }
    std::cout << divider;
}

