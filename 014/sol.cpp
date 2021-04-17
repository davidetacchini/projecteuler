#include <iostream>

int main() {
    int number = 1000000;
    long temp, count, res;
    long max = 0;
    
    for (int i = 2; i < number; i++) {
        count = 0;
        temp = i;
        while (temp > 1) {
            if (temp % 2 == 0) {
                temp /= 2;
            } else {
                temp = (3 * temp) + 1;
            }
            count++;
        }
        std::cout << "Number: " << i << "\t"
                  << "Count: " << count << "\n";
        if (count > max) {
            max = count;
            res = i;
        }
    }
    std::cout << res << " " << max;
}
