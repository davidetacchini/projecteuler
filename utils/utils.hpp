#pragma once

#include <cmath>

bool is_prime(int number) {
    if (number <= 1) {
        return false;
    } else if (number == 2) {
        return true;
    }

    int i = 3;
    while ((i * i) <= number) { 
        if(number % i == 0) {
            return false;
        } else {
            i += 2;
        }
    }
    return true;
}

bool is_palindrome(int number) {
    int to_reverse = number;
    int reversed = 0;

    while(to_reverse > 0) {
        reversed = reversed * 10 + to_reverse % 10;
        to_reverse = floor(to_reverse / 10);
    }
    return number == reversed;
}
