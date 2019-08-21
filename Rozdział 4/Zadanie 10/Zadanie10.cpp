#include <bits/stdc++.h>

int main() {
    std::cout << "Proszę podać trzykrotnie wynik sprintu na 100 metrów:\n\n";
    std::array<double, 3> results;
    for (int i = 0; i < 3; i++) {
        std::cout << "Wynik sprintu #" << i + 1 << ": ";
        std::cin >> results[i];
    }
    std::cout << "Tak wyglądają wprowadzone czasy:\n\n";
    for (int i = 0; i < 3; i++)
        std::cout << "Bieg #" << i + 1 << ": " << results[i] << " sekund\n";
    std::cout << "\nŚrednia tych czasów wynosi " << (results[0] + results[1] + results[2]) / 3 << " sekund.";
}
