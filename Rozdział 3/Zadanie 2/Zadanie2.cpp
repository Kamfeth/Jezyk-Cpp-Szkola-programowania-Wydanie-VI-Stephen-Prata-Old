#include <iostream>

int main() {
    const int INCHES_PER_FEET = 12;
    const double METERS_PER_INCH = 0.0254;
    std::cout << "Proszę podać kolejno następujące wartości oddzielając je spacją: Wzrost w stopach i calach, a następnie wagę w funtach: ";
    int feets;
    int inches;
    int weight;
    std::cin >> feets >> inches >> weight;
    std::cout << "Twoje BMI wynosi: " << weight / 2.2 / (((feets * INCHES_PER_FEET + inches) * METERS_PER_INCH) * ((feets * INCHES_PER_FEET + inches) * METERS_PER_INCH));
}
