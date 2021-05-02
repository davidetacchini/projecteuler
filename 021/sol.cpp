#include <iostream>

int sum_of_factors(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    const int limit = 10000;
    int sum, sum1;
    int res = 0;

    for (int i = 1; i < limit; i++) {
        sum = sum_of_factors(i);
        sum1 = sum_of_factors(sum);
        if (i == sum1 && sum != sum1) {
            res += i;
        }
    }
    std::cout << res;
}
