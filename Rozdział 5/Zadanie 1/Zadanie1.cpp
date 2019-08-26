#include <iostream>

int main() {
    std::cout << "Proszę podać dwie liczby całkowite.\n";
    std::cout << "Wprowadź pierwszą liczbę całkowitą: ";
    int firstNumber;
    std::cin >> firstNumber;
    std::cout << "Wprowadź drugą liczbę całkowitą: ";
    int secondNumber;
    std::cin >> secondNumber;
    int sum = 0;
    for (int i = firstNumber; i <= secondNumber; i++)
        sum += i;
    std::cout << "Suma wszystkich liczb pomiędzy wartością " << firstNumber << " a wartością " << secondNumber << " wynosi " << sum << ".";
}
