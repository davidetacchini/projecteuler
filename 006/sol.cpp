#include <iostream>

int main() {
    const int n = 100;
    int sum_of_squares = 0;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum_of_squares += (i * i);
        sum += i;
    }
    std::cout << (sum * sum) - sum_of_squares;
}
