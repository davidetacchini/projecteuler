#include <iostream>
#include <cmath>

int main() {
    const int limit = 500;
    int number = 0;
	int i = 1;
    int factors;

    while(factors < limit) {
		number += i;
		i++;
        factors = 0;
        for (int j = 1; j <= sqrt(number); j++) {
            if (number % j == 0) {
                factors += 2;
            }
        }
	}
    std::cout << number;
}
