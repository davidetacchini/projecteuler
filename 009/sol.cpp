#include <iostream>
#include <cmath>

struct triple {
    int a;
    int b;
    int c;
};

bool are_coprime(int m, int n) {
    for (int i = 2; i < sqrt(n); i++) {
        if (m % i == 0 && n % i == 0) {
            return false;
        }
    }
    return true;
}

triple make_triple(triple tr, int n, int m) {
    // Euclid's formula
    tr.a = (m * m) - (n * n);
    tr.b = 2 * m * n;
    tr.c = (m * m) + (n * n);
    return tr;
}

int main () {
    const int limit = 1000;
    int m = 2;
    triple tr;
    int sum, product;
 
    bool found = false;
    while (!found) {
        for (int n = 1; n < m; n++) {
            if (are_coprime(m, n)) {
                tr = make_triple(tr, n, m);
                sum = tr.a + tr.b + tr.c;
            }
            if (sum == limit) {
                product = tr.a * tr.b * tr.c;
                found = true;
                break;
            }
        }
        m++;
    }
    std::cout << product;
}
