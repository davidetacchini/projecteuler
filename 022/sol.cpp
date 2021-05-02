#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::ifstream file ("names.txt");
    std::string s; file >> s; s += ',';
    std::vector<std::string> names;

    size_t pos = 0;
    while ((pos = str.find(",")) != std::string::npos) {
        std::string name = str.substr(0, pos);
        names.push_back(name);
        str.erase(0, pos + 1); // +1 = delimiter (,) length
    }

    std::sort(names.begin(), names.end());

    int res = 0;
    for (int i = 0; i < names.size(); i++) {
        int score = 0;
        for (char c: names[i]) {
            if (std::isupper(c)) {
                score += c - 0x41 + 1; // 0x41 = 'A'
            }
        }
        res += (i + 1) * score;
    }
    std::cout << res;
}
