#include <iostream>
#include <cmath>

bool is_palindrome(int number) {
    int to_reverse = number;
    int reversed = 0;

    while(to_reverse > 0) {
        reversed = reversed * 10 + to_reverse % 10;
        to_reverse = floor(to_reverse / 10);
    }
    return number == reversed;
}

int main() {
    const short n = 999;
    int mul = 0;
    int res = 0;
    
    for (short i = 1; i <= n; i++) {
        for (short j = 1; j <= n; j++) {
            mul = i * j;
            if (is_palindrome(mul) && mul > res) {
                res = mul;
            }
        }
    }
    std::cout << res;
}

