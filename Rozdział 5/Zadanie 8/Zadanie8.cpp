#include <bits/stdc++.h>

int main() {
    std::cout << "Podawaj słowa (kiedy skończysz, napisz \"gotowe\")\n";
    char word[11];
    int wordCounter = 0;
    while (strcmp(word, "gotowe")) {
        std::cin >> word;
        wordCounter++;
    }
    std::cout << "Podano " << --wordCounter << " słów.";
}
