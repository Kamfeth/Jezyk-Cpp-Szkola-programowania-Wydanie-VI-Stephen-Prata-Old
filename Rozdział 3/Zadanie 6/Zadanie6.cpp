#include <iostream>

int main() {
    std::cout << "Proszę podać ilość przejechanych kilometrów: ";
    double distance;
    std::cin >> distance;
    std::cout << "Proszę podać ilość zużytej benzyny w litrach: ";
    int gas;
    std::cin >> gas;
    std::cout << "Zużycie samochodu wynosi " << distance / gas * 100 << " l/100km";
}
