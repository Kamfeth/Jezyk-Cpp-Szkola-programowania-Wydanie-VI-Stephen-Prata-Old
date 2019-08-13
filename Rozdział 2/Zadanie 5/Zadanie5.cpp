#include <iostream>

int changeToFahrenheit(int celsius);

int main() {
    std::cout << "Podaj temperaturę w stopniach Celsjusza: ";
    int temperature;
    std::cin >> temperature;
    std::cout << temperature << " stopnie Celsjusza to " << changeToFahrenheit(temperature) << " stopnie Fahrenheita.";
}

int changeToFahrenheit(int celsius) {
    return celsius * 1.8 + 32;
}
