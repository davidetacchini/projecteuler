#include <iostream>

// really slow implementation
int main() {
    const uint8_t n = 20;
    uint8_t count;
    int i;

    for (i = 1; ; i++) {
        count = 0;
        for (uint8_t j = 1; j <= n; j++) {
            if (i % j == 0) count++;
        }
        if (count == n) break;
    }
    std::cout << i;
}

