#include <iostream>

int main() {
    const int size = 20;
    long result = 1;

    for (int i = 0; i < size; i++) {
        result *= (2 * size) - i;
        result /= i + 1;
    }
    std::cout << result;
}
