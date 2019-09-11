#include <iostream>

const char* SEASONS[4] = {"Wiosna", "Lato", "Jesień", "Zima"};

void fillExpenses(double expenses[], int size);
void showExpenses(double expenses[], int size);

int main() {
    double expenses[4];
    fillExpenses(expenses, 4);
    showExpenses(expenses, 4);
}

void fillExpenses(double expenses[], int size) {
    for (int i = 0; i < 4; i++) {
        std::cout << "Podaj wydatki za okres >>" << SEASONS[i] << "<<: ";
        std::cin >> expenses[i];
    }
}

void showExpenses(double expenses[], int size) {
    double total = 0.0;
    std::cout << "\nWYDATKI\n";
    for (int i = 0; i < 4; i++) {
        std::cout << SEASONS[i] << ": " << expenses[i] << " zł\n";
        total += expenses[i];
    }
    std::cout << "Łącznie wydatki roczne: " << total << " zł\n";
}
