#include <iostream>

int main() {
    std::cout << "Proszę podać wartość zużycia benzyny w litrach na 100 km: ";
    int fuelUsage;
    std::cin >> fuelUsage;
    std::cout << "Zużycie benzyny w milach na galon wynosi " << 62.14 / (fuelUsage / 3.785);
}
