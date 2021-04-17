#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::ifstream file ("names.txt");
    std::string str;
    std::vector<std::string> names;

    getline(file, str);
    str += ','; // fix last element not getting pushed
    
    size_t pos = 0;
    while ((pos = str.find(",")) != std::string::npos) {
        std::string name = str.substr(0, pos);
        names.push_back(name);
        // +1 = delimeter length
        str.erase(0, pos + 1); 
    }

    std::sort(names.begin(), names.end());

    int result = 0;
    for (int i = 0; i < names.size(); i++) {
        int score = 0;
        for (char c: names[i]) {
            if (std::isupper(c)) {
                // 0x41 = 'A'
                score += c - 0x41 + 1;
            }
        }
        result += (i + 1) * score;
    }

    std::cout << result;
}
