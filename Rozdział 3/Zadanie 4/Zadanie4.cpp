#include <iostream>

int main() {
    const int SECONDS_PER_DAY = 86400;
    std::cout << "Podaj liczbę sekund: ";
    long seconds;
    std::cin >> seconds;
    std::cout << seconds << " sekund = " << seconds / SECONDS_PER_DAY << " dni, " << seconds % SECONDS_PER_DAY / 3600 << " godzin, " << seconds % SECONDS_PER_DAY % 3600 / 60 << " minut, " << seconds % SECONDS_PER_DAY % 3600 % 60 << " sekund";
}
