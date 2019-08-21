#include <iostream>

int main() {
    struct bar {
        std::string name;
        double weight;
        int calories;
    };
    bar snack = {"Mocha Munch", 2.3, 350};
    std::cout << "Nazwa batonika: " << snack.name << std::endl;
    std::cout << "Waga batonika: " << snack.weight << std::endl;
    std::cout << "Liczba kalorii batonika: " << snack.calories;
}
