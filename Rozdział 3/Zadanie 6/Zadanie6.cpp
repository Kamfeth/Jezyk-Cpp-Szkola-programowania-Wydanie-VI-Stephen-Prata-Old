#include <iostream>

int main() {
    std::cout << "Proszę podać kolejno następujące informacje oddzielając je spacją: Ilość przejechanych kilometrów oraz ilość zużytej benzyny w litrach: ";
    int distance;
    int gas;
    std::cin >> distance >> gas;
    std::cout << "Zużycie samochodu wynosi " << (double) distance / gas * 100 << " l/100km";
}
