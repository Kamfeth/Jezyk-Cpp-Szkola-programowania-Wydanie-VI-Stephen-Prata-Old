#include <iostream>

int main() {
    std::cout << "Proszę podać odległość w milach morskich: ";
    int distance;
    std::cin >> distance;
    std::cout << "Po przekonwertowaniu odległość ta wynosi << distance * 1852 << " "metrów.";
    distance *= 1852;
}
