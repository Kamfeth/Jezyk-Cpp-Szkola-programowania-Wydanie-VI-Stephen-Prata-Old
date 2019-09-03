#include <iostream>

int main() {
    const int SECONDS_PER_MINUTE = 60;
    const int MINUTES_PER_DEGREE = 60;
    std::cout << "Podaj długość w stopniach, minutach i sekundach:\nNajpierw podaj stopnie: ";
    int degrees;
    std::cin >> degrees;
    std::cout << "Następnie podaj minuty stopnia łuku: ";
    int minutes;
    std::cin >> minutes;
    std::cout << "Na koniec podaj sekundy łuku: ";
    int seconds;
    std::cin >> seconds;
    double answer = ((double) seconds / SECONDS_PER_MINUTE + minutes) / MINUTES_PER_DEGREE + degrees;
    std::cout << degrees << " stopni, " << minutes << " minut, " << seconds << " sekund = " << answer << " stopni";
}
