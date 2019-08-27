#include <iostream>

int main() {
    std::cout << "Podaj liczbę wierszy: ";
    int rows;
    std::cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++)
            std::cout << ".";
        for (int j = rows - i; j < rows; j++)
            std::cout << "*";
        std::cout << std::endl;
    }
}
