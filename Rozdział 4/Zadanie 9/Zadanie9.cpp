#include <iostream>

int main() {
    struct bar {
        std::string name;
        double weight;
        int calories;
    };
    bar * ptr = new bar[3] {
        {"Snickers", 21.37, 322},
        {"Twix", 91.51, 420},
        {"Bounty", 5.95, 1337}
    };
    for (int i = 0; i < 3; i++) {
        std::cout << "Batonik #" << i + 1 << ":\n\n";
        std::cout << "Nazwa batonika: " << ptr[i].name << std::endl;
        std::cout << "Waga batonika: " << ptr[i].weight << std::endl;
        std::cout << "Liczba kalorii batonika: " << ptr[i].calories << std::endl << std::endl;
    }
    delete [] ptr;
}
