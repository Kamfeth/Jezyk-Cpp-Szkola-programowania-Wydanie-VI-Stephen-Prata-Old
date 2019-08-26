#include <iostream>

int main() {
    const std::string MONTHS_IN_YEAR[12] = {"Styczeń", "Luty", "Marzec", "Kwiecień", "Maj", "Czerwiec", "Lipiec", "Sierpień", "Wrzesień", "Październik", "Listopad", "Grudzień"};
    int soldBooks[12];
    int sum = 0;
    for (int i = 0; i < 12; i++) {
        std::cout << "Podaj ilość sprzedanych egzemplarzy książki \"C++ dla ociężałych\" za miesiąc " << MONTHS_IN_YEAR[i] << ": ";
        std::cin >> soldBooks[i];
        sum += soldBooks[i];
    }
    std::cout << "W ciągu roku udało się sprzedać " << sum << " egzemplarzy.";
}
