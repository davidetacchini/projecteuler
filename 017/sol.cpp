#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> start {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
std::vector<std::string> middle {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
std::vector<std::string> end {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

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
    const int number = 1000;
    std::string str;
    int sum = 0;

    for (int i = 1; i <= number; i++) {
        str = number_to_string(i);
        std::cout << str << "\n";
        sum += str.length();
    }

    std::cout << sum;
}

