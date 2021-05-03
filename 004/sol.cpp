#include <iostream>
#include "../utils/utils.hpp"

int main() {
    const int n = 1000;
    int mul = 0;
    int res = 0;
    
    for (int i = 100; i < n; i++) {
        for (int j = 100; j < n; j++) {
            mul = i * j;
            if (is_palindrome(mul) && mul > res) {
                res = mul;
            }
        }
    }
    std::cout << res;
}
