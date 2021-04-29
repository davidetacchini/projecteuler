#include <iostream>
#include <cmath>

bool is_pentagonal(long number) {
    double n = (sqrt(24 * number + 1) + 1) / 6;
    return (n - (int)n) == 0;
}

int main() {
    int i = 144;
   
    while (true) {
        long number = i * (2 * i - 1);
        if (is_pentagonal(number)) {
            std::cout << number << '\n';
            break;
        }
        i++;
    }
}
