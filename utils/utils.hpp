#pragma once

#include <cmath>

bool is_prime(int n) {
    if (n <= 3) {
        return n > 1;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }
    return true;
}

bool is_palindrome(int n) {
    int to_reverse = n;
    int reversed = 0;

    while(to_reverse > 0) {
        reversed = reversed * 10 + to_reverse % 10;
        to_reverse = floor(to_reverse / 10);
    }
    return n == reversed;
}
