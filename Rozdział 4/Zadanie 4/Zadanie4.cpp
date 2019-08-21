#include <iostream>

int main() {
    std::cout << "Podaj imię: ";
    std::string firstName;
    std::cin >> firstName;
    std::cout << "Podaj nazwisko: ";
    std::string lastName;
    std::cin >> lastName;
    lastName += ", " + firstName;
    std::cout << "Oto informacje zestawione w jeden napis: " << lastName;
}
