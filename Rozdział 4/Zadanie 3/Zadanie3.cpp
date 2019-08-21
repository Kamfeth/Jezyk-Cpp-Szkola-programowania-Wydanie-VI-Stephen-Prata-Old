#include <bits/stdc++.h>

int main() {
    std::cout << "Podaj imię: ";
    char firstName[6];
    std::cin >> firstName;
    std::cout << "Podaj nazwisko: ";
    char lastName[14];
    std::cin >> lastName;
    strcat(lastName, ", ");
    strcat(lastName, firstName);
    std::cout << "Oto informacje zestawione w jeden napis: " << lastName;
}
