#include <iostream>

int main() {
    const std::string MONTHS_IN_YEAR[12] = {"Styczeń", "Luty", "Marzec", "Kwiecień", "Maj", "Czerwiec", "Lipiec", "Sierpień", "Wrzesień", "Październik", "Listopad", "Grudzień"};
    int soldBooks[3][12];
    int sum[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
        std::cout << "Dane ze sprzedaży za rok #" << i + 1 << ":\n";
        for (int j = 0; j < 12; j++) {
            std::cout << "Podaj ilość sprzedanych egzemplarzy książki \"C++ dla ociężałych\" za miesiąc " << MONTHS_IN_YEAR[j] << ": ";
            std::cin >> soldBooks[i][j];
            sum[i] += soldBooks[i][j];
        }
        std::cout << "W ciągu roku #" << i + 1 << " sprzedano " << sum[i] << " egzemplarzy\n\n";
    }
    std::cout << "W ciągu trzech lat udało się łącznie sprzedać " << sum[0] + sum[1] + sum[2] << " egzemplarzy.";
}
