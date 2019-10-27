#include <iostream>

void strCount(std::string str);

int main() {
    std::cout << "Wprowadź wiersz:\n";
    std::string input;
    while (getline(std::cin, input) && input != "") {
        strCount(input);
        std::cout << "Wprowadź następny wiersz (wiersz pusty kończy wprowadzanie):\n";
    }
    std::cout << "Koniec\n";
}

void strCount(std::string str) {
    static int total = 0;
    total += str.length();
    std::cout << "\"" << str << "\" zawiera " << str.length() << " znaków\n";
    std::cout << "Łącznie "<< total << " znaków\n";
}
