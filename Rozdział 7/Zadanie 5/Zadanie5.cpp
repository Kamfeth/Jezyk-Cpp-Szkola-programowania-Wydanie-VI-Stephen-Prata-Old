#include <iostream>

long double factorial(int n);

int main() {
    std::cout << "Proszę podawać liczby dla których zostanie policzona silnia. Wprowadzenie wartości nieliczbowej kończy program.\n";
    std::cout << "Wprowadź liczbę: ";
    int number;
    while (std::cin >> number) {
        std::cout << number << "! = " << factorial(number) << std::endl;
        std::cout << "Wprowadź liczbę: ";
    }
}

long double factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
