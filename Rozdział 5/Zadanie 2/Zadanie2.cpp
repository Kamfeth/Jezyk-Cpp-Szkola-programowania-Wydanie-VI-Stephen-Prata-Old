#include <bits/stdc++.h>

int main() {
    std::array<long double, 101> factorials;
    factorials[1] = factorials[0] = 1.0;
    for (int i = 2; i < 101; i++)
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i < 101; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
}
