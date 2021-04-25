#include <iostream>
#include "../utils/utils.hpp"

int main() {
    const int n = 999;
    int mul = 0;
    int res = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            mul = i * j;
            if (is_palindrome(mul) && mul > res) {
                res = mul;
            }
        }
    }
    std::cout << res;
}
