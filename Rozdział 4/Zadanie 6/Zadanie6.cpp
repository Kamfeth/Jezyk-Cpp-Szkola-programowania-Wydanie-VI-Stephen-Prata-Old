#include <iostream>

int main() {
    struct bar {
        std::string name;
        double weight;
        int calories;
    };
    bar snacks[3] {
        {"Snickers", 21.37, 322},
        {"Twix", 91.51, 420},
        {"Bounty", 5.95, 1337}
    };
    for (int i = 0; i < 3; i++) {
        std::cout << "Batonik #" << i + 1 << ":\n\n";
        std::cout << "Nazwa batonika: " << snacks[i].name << std::endl;
        std::cout << "Waga batonika: " << snacks[i].weight << std::endl;
        std::cout << "Liczba kalorii batonika: " << snacks[i].calories << std::endl << std::endl;
    }
}
