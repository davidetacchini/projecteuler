#include <iostream>
#include <vector>
#include <string>

typedef std::vector<std::string> vs;

vs start {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
vs middle {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", 
           "seventeen", "eighteen", "nineteen"};
vs end {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

std::string number_to_string(int number) {
    for (int i = 1; i <= number; i++) {
        if (number < 10) {
           return start[number]; 
        } else if (number < 20) {
            return middle[number - 10];
        } else if (number < 100) {
            return end[number / 10] + ((number % 10 == 0) ? "" : number_to_string(number % 10));
        } else if (number < 1000) {
            return start[number / 100] + "hundred" + ((number % 100 == 0) ? "" : "and" + number_to_string(number % 100));
        }
    }
    return "onethousand"; // then it's the last number (based on this case)
}

int main() {
    const int n = 1000;
    std::string str;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        str = number_to_string(i);
        sum += str.length();
    }
    std::cout << sum;
}
