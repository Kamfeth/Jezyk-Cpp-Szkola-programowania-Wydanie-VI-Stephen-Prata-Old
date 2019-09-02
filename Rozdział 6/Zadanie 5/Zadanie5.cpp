#include <iostream>

int main() {
    std::cout << "Proszę podać swój dochód w twarpach: ";
    int income;
    while (std::cin >> income && income >= 0) {
        if (income <= 5000)
            std::cout << "Podatek do zapłacenia wynosi 0 twarpów.\n";
        else if (income > 5000 && income <= 15000)
            std::cout << "Podatek do zapłacenia wynosi " << (income - 5000) * 0.1 << " twarpów.\n";
        else if (income > 15000 && income <= 35000)
            std::cout << "Podatek do zapłacenia wynosi " << (income - 15000) * 0.15 + 1000 << " twarpów.\n";
        else
            std::cout << "Podatek do zapłacenia wynosi " << (income - 35000) * 0.2 + 4000 << " twarpów.\n";
        std::cout << "Proszę podać swój dochód w twarpach: ";
    }
}
