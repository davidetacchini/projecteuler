#include <iostream>

int main() {
    int sol = 0;

    for (int i = 0; i < 1000; i++) {
        if (!(i % 3) || !(i % 5)) {
            sol += i;
        }
    }
    std::cout << sol;
}
