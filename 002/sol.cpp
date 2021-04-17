#include <iostream>

int main() {
    const int max = 4000000;
    int sol = 0;
    int sum = 0;
    int n1 = 0;
    int n2 = 1;

    while (true) {
        if (n1 >= max) {
            break;
        }
        sum = n1 + n2;
        if (sum % 2 == 0) {
            sol += sum;
        }
        n1 = n2;
        n2 = sum;
    }
    std::cout << sol;
}
