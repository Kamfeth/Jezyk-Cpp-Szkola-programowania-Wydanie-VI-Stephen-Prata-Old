#include <iostream>

int main() {
    const double CENTIMETERS_PER_INCH = 2.54;
    std::cout << "Proszę podać wzrost w centymetrach: ";
    int height;
    std::cin >> height;
    int feets = height / CENTIMETERS_PER_INCH / 12;
    int inches = (int) (height / CENTIMETERS_PER_INCH) % 12;
    std::cout << "Twój wzrost w stopach i calach wynosi " << feets << "_" << inches;
}
