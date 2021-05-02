#include <iostream>
#include <string>
#include "../utils/utils.hpp"

bool is_string_palindrome(std::string s) {
    std::string reverse (s.rbegin(), s.rend());
    if (s == reverse) {
        return true;
    }
    return false;
}

std::string to_binary(int n) {
    std::string bin;

    while (n > 0) {
        if (n % 2 == 0) {
            bin.insert(bin.begin(), '0'); 
        } else {
            bin.insert(bin.begin(), '1'); 
        }
        n >>= 1;
    }
    return bin;
}

int main() {
    const int limit = 1000000;
    int sum = 0;

    for (int i = 1; i < limit; i++) {
        std::string bin = to_binary(i);
        if (is_palindrome(i) && is_string_palindrome(bin)) {
            sum += i;
        }
    }
    std::cout << sum;
}
