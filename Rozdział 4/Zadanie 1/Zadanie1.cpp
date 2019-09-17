#include <iostream>

int main() {
    std::cout << "Jak masz na imię? ";
    std::string name;
    getline(std::cin, name);
    std::cout << "Jak się nazywasz? ";
    std::string lastName;
    getline(std::cin, lastName);
    std::cout << "Na jaką ocenę zasługujesz? ";
    int grade;
    std::cin >> grade;
    std::cout << "Ile masz lat? ";
    int age;
    std::cin >> age;
    std::cout << "Nazwisko: " << lastName << ", " << name << std::endl;
    std::cout << "Ocena: " << --grade << std::endl;
    std::cout << "Wiek: " << age;
}
