#include <iostream>

int main() {
    struct car {
        std::string brand;
        int yearOfProduction;
    };
    std::cout << "Ile samochodów chcesz skatalogować? ";
    int size;
    std::cin >> size;
    car * ptr = new car[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Samochód #" << i + 1 << ":\n";
        std::cout << "Proszę podać markę: ";
        std::cin.get();
        getline(std::cin, ptr[i].brand);
        std::cout << "Rok produkcji: ";
        std::cin >> ptr[i].yearOfProduction;
    }
    for (int i = 0; i < size; i++)
        std::cout << ptr[i].yearOfProduction << " " << ptr[i].brand << std::endl;
    delete [] ptr;
}
