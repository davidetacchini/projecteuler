#include <iostream>

// really slow implementation
int main() {
    const int n = 20;
    int count;
    int i;

    for (i = 1; ; i++) {
        count = 0;
        for (int j = 1; j <= n; j++) {
            if (i % j == 0) count++;
        }
        if (count == n) break;
    }
    std::cout << i;
}
