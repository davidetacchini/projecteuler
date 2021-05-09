#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int get_max_occurence(std::vector<int> v) {
    int max = 0;
    int res;
    int count = 0;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) {
            count++;
        } else {
            count = 0;
        }
        if (count > max) {
            max = count;
            res = v[i];
        }
    }
    return res;
}

int main() {
    const int n = 1000;
    std::vector<int> v;
    
    for (int a = 1; a <= n; a++) {
        for (int b = a; b <= n; b++) {
            double c = sqrt((a * a) + (b * b));
            int sum = a + b + (int)c;
            if (c == (int)c && sum <= n) {
                v.push_back(sum);
            }
        }
    }
    std::sort(v.begin(), v.end());
    std::cout << get_max_occurence(v);
}
