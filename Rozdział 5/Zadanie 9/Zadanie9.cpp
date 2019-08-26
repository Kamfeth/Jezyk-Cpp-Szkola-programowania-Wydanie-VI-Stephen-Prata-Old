#include <bits/stdc++.h>

int main() {
    std::cout << "Podawaj słowa (kiedy skończysz, napisz \"gotowe\")\n";
    std::string word;
    int wordCounter = 0;
    while (word != "gotowe") {
        std::cin >> word;
        wordCounter++;
    }
    std::cout << "Podano " << wordCounter - 1 << " słów.";
}
