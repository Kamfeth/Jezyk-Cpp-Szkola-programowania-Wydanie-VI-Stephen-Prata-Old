#include <bits/stdc++.h>

int main() {
    const int INCHES_PER_FEET = 12;
    const double METERS_PER_INCH = 0.0254;
    const double POUNDS_PER_KILOGRAM = 2.2;
    std::cout << "Proszę podać swój wzrost w amerykańskich jednostkach miar.\n";
    std::cout << "Najpierw podaj swój wzrost w stopach: ";
    int feets;
    std::cin >> feets;
    std::cout << "Teraz wprowadź swój wzrost w calach: ";
    int inches;
    std::cin >> inches;
    std::cout << "Podaj swoją wagę w funtach: ";
    int weight;
    std::cin >> weight;
    double weightInKilograms = weight / POUNDS_PER_KILOGRAM;
    double heightInCentimeters = (feets * INCHES_PER_FEET + inches) * METERS_PER_INCH;
    std::cout << "Twoje BMI wynosi: " << weightInKilograms / pow(heightInCentimeters, 2);
}
