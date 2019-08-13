#include <iostream>

void showTime(int hours, int minutes);

int main() {
    std::cout << "Podaj liczbę godzin: ";
    int hours;
    std::cin >> hours;
    std::cout << "Podaj liczbę minut: ";
    int minutes;
    std::cin >> minutes;
    showTime(hours, minutes);
}

void showTime(int hours, int minutes) {
    std::cout << "Czas: " << hours << ":" << minutes;
}
