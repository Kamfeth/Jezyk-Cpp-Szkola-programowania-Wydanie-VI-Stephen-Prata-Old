#include <bits/stdc++.h>

int fill_array(double numbers[], int size);
void show_array(const double numbers[], int size);
void reverse_array(double numbers[], int size);

int main() {
    double numbers[5];
    int size = fill_array(numbers, 5);
    show_array(numbers, size);
    reverse_array(numbers, size);
    std::cout << "\nPo odwróceniu elementów, tablica wygląda następująco:\n\n";
    show_array(numbers, size);
}

int fill_array(double numbers[], int size) {
    std::cout << "Proszę wprowadzać liczby, wpisanie wartości nieliczbowej kończy program.\n";
    std::cout << "Wprowadź liczbę #1: ";
    double number;
    int i = 0;
    while (std::cin >> numbers[i++] && i < size)
        std::cout << "Wprowadź liczbę #" << i + 1 <<": ";
    if (i < 5)
        return --i;
    return i;
}

void show_array(const double numbers[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << "Liczba #" << i + 1 << ": " << numbers[i] << std::endl;
}

void reverse_array(double numbers[], int size) {
    std::reverse(numbers, numbers + size);
}
