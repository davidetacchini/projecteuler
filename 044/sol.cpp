#include <iostream>
#include <vector>
#include <cmath>

static const int limit = 10000;

void fill_vector(std::vector<int>& v) {
    for (int i = 1; i <= limit; i++) {
        int p = i * (3 * i - 1) / 2;
        v.push_back(p);
    }
}

bool is_pentagonal(int number) {
    double n = (sqrt(24 * number + 1) + 1) / 6;
    return (n - (int)n) == 0;
}

int main() {
    std::vector<int> pents;
    fill_vector(pents);
    bool found = false;
    int res;

    for (int i = 0; i < pents.size(); i++) {
        for (int j = 1; j < pents.size(); j++) {
            int sum = pents[i] + pents[j];
            int diff = pents[i] - pents[j];
            if (is_pentagonal(sum) && is_pentagonal(diff)) {
                res = pents[i] - pents[j];
                found = true; break;
            }
        }
        if (found) {
            break;
        }
    }
    std::cout << res << '\n';
}
