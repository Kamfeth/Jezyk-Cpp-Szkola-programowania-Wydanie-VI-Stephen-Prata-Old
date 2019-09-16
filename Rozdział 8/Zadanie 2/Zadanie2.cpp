#include <iostream>

struct bar {
    const char * name;
    double weight;
    int calories;
};

void setBarData(bar & energyBar, const char * name = "Millennium Munch", double weight = 2.85, int calories = 350);
void showBarData(const bar & energyBar);

int main() {
    std::cout << "Informacje o batoniku po wywołaniu funkcji inicjalizacyjnej bez podania trzech ostatnich parametrów wyglądają następująco.\n\n";
    bar energyBar;
    setBarData(energyBar);
    showBarData(energyBar);
    std::cout << "\nInformacje o batoniku po wywołaniu funkcji inicjalizacyjnej bez podania dwóch ostatnich parametrów wyglądają następująco.\n\n";
    setBarData(energyBar, "Twix");
    showBarData(energyBar);
    std::cout << "\nInformacje o batoniku po wywołaniu funkcji inicjalizacyjnej bez podania ostatniego parametru wyglądają następująco.\n\n";
    setBarData(energyBar, "Mars", 3.22);
    showBarData(energyBar);
    std::cout << "\nInformacje o batoniku po wywołaniu funkcji inicjalizacyjnej z podaniem wszystkich parametrów wyglądają następująco.\n\n";
    setBarData(energyBar, "Snickers", 4.20, 476);
    showBarData(energyBar);
}

void setBarData(bar & energyBar, const char * name, double weight, int calories) {
    energyBar.name = name;
    energyBar.weight = weight;
    energyBar.calories = calories;
}

void showBarData(const bar & energyBar) {
    std::cout << "Marka producenta: " << energyBar.name << std::endl;
    std::cout << "Waga: " << energyBar.weight << std::endl;
    std::cout << "Liczba kalorii: " << energyBar.calories << std::endl;
}
