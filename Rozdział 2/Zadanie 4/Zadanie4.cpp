#include <iostream>

int main() {
    std::cout << "Podaj swój wiek: ";
    int age;
    std::cin >> age;
    std::cout << "Twój wiek w miesiącach wynosi " << age * 12 << ".";
}
