#include <iostream>

int main() {
    const int n = 20;
    long result = 1;

    for (int i = 0; i < n; i++) {
        result *= (2 * n) - i;
        result /= i + 1;
    }
    std::cout << result;
}
