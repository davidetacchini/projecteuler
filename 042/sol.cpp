#include <iostream>
#include <fstream>
#include <string>
#include <vector>

static const int limit = 100; // generate the first 100 triangle numbers

int word_value(std::string s) {
    int sum = 0;
    for (char c: s) {
        if (std::isupper(c)) {
            // subtract 64 to get the alphabet index of the char
            // e.g. A = 65 -> 65 - 64 = 1 (based on ASCII table)
            sum += c - 64;
        }
    }
    return sum;
}

void triangle_numbers(std::vector<int>& v) {
    for (double i = 1; i <= limit; i++) {
        int num = (i / 2) * (i + 1);
        v.push_back(num);
    }
}

// binary search, the array is already sorted
bool is_triangle(int target, std::vector<int> numbers) {
    int l = 0;
    int r = numbers.size() - 1;
    if (target < numbers[l] || target > numbers[r]) {
        return false;
    }
    while (l <= r) {
        int mid = (l + r) / 2; 
        if (numbers[mid] == target) {
            return true;
        }
        if (numbers[mid] < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return false;
}

int main() {
    std::ifstream file ("words.txt");
    std::string s; file >> s; s += ',';
    std::vector<std::string> words;
    std::vector<int> numbers;
    triangle_numbers(numbers);
    int count = 0;

    size_t pos = 0;
    while ((pos = s.find(',')) != std::string::npos) {
        std::string word = s.substr(0, pos);
        words.push_back(word);
        s.erase(0, pos + 1);
    }

    for (std::string word: words) {
        int value = word_value(word);
        if (is_triangle(value, numbers)) {
            count++;
        }
    }
    std::cout << count << '\n';
}
