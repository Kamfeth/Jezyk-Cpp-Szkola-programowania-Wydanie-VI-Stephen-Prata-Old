#include <iostream>

int main() {
    std::cout << "Podaj swoje imię:\n";
    std::string name;
    getline(std::cin, name);
    std::cout << "Podaj swój ulubiony deser:\n";
    std::string dessert;
    getline(std::cin, dessert);
    std::cout << "Mam dla ciebie " << dessert << ", " << name << ".";
}
