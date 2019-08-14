#include <iostream>

int main() {
    std::cout << "Podaj liczbę ludności świata: ";
    long long populationOfEarth;
    std::cin >> populationOfEarth;
    std::cout << "Podaj liczbę ludności Polski: ";
    long long  populationOfPoland;
    std::cin >> populationOfPoland;
    std::cout.precision(5);
    std::cout << "Populacja Polski stanowi " << populationOfPoland * 100.0 / populationOfEarth << "% populacji świata.";
}
