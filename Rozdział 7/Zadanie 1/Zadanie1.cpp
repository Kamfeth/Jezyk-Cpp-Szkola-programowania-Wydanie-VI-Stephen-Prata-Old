#include <iostream>

double harmonicMean(int x, int y);

int main() {
    std::cout << "Proszę podać kolejno dwie liczby, wartości x oraz y. Liczba 0 kończy działanie programu: ";
    int x;
    int y;
    while (std::cin >> x >> y && x != 0 && y != 0) {
        std::cout << "Średnia harmoniczna tych liczb wynosi " << harmonicMean(x, y) << std::endl;
        std::cout << "\nProszę podać kolejno dwie liczby, wartości x oraz y. Liczba 0 kończy działanie programu: ";
    }
}

double harmonicMean(int x, int y) {
    return 2.0 * x * y / (x + y);
}
