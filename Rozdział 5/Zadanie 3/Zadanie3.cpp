#include <iostream>

int main() {
    std::cout << "Proszę podawać liczby, program kończy działanie po wprowadzeniu wartości 0.\n";
    int sum = 0;
    int number;
    while (number != 0) {
        std::cout << "Proszę wprowadzić liczbę: ";
        std::cin >> number;
        sum += number;
        std::cout << "Suma wprowadzonych dotychczas liczb wynosi " << sum << ".\n";
    }
}
