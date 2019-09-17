#include <bits/stdc++.h>

int main() {
    int counter = 0;
    char ch;
    std::ifstream file;
    file.open("Linkin Park - In The End");
    while (file.get(ch)) {
        std::cout << ch;
        counter++;
    }
    std::cout << "\nŁączna ilośc znaków w tym pliku wynosi " << counter;
    file.close();
}
