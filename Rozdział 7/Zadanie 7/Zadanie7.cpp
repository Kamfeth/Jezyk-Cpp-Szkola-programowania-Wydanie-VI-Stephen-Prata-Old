#include <iostream>

double* fillArray(double* begin, double* end);
void showArray(const double* begin, const double* end);
void revalue(double* begin, double* end, double factor);

int main() {
    double properties[5];
    double* size = fillArray(properties, &properties[5]);
    showArray(properties, size);
    if (properties[0] >= 0) {
        std::cout << "Podaj czynnik zmiany wartości: ";
        double factor;
        std::cin >> factor;
        revalue(properties, size, factor);
        showArray(properties, size);
    }
    std::cout << "Gotowe!\n";
}

double* fillArray(double* begin, double* end) {
    int i = 1;
    double* ptr = begin;
    std::cout << "Podaj wartość #1: ";
    while (std::cin >> *ptr && *ptr >= 0 && ++ptr != end)
        std::cout << "Podaj wartość #" << ++i << ": ";
    return ptr;
}

void showArray(const double* begin, const double* end) {
    int i = 1;
    for (const double* ptr = begin; ptr != end; ptr++)
        std::cout << "Nieruchomość #" << i++ << ": " << *ptr << std::endl;
}

void revalue(double* begin, double* end, double factor) {
    for (double* ptr = begin; ptr != end; ptr++)
        *ptr *= factor;
}
