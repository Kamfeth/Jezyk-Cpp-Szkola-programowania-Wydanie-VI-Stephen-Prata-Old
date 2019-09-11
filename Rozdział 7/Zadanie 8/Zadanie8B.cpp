#include <iostream>

struct data {double expenses[4];};

const char* SEASONS[4] = {"Wiosna", "Lato", "Jesień", "Zima"};

void fillExpenses(data* debtor);
void showExpenses(data debtor);

int main() {
    data debtor;
    fillExpenses(&debtor);
    showExpenses(debtor);
}

void fillExpenses(data* debtor) {
    for (int i = 0; i < 4; i++) {
        std::cout << "Podaj wydatki za okres >>" << SEASONS[i] << "<<: ";
        std::cin >> debtor->expenses[i];
    }
}

void showExpenses(data debtor) {
    double total = 0.0;
    std::cout << "\nWYDATKI\n";
    for (int i = 0; i < 4; i++) {
        std::cout << SEASONS[i] << ": " << debtor.expenses[i] << " zł\n";
        total += debtor.expenses[i];
    }
    std::cout << "Łącznie wydatki roczne: " << total << " zł\n";
}
