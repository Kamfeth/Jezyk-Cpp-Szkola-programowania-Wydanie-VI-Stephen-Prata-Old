#include <iostream>

int main() {
    const double CENTIMETERS_PER_INCH = 2.54;
    std::cout << "Proszę podać wzrost w centymetrach: ";
    int height;
    std::cin >> height;
    std::cout << "Twój wzrost w stopach i calach wynosi " << (int) (height / CENTIMETERS_PER_INCH) / 12 << "_" << (int) (height / CENTIMETERS_PER_INCH) % 12;
}
