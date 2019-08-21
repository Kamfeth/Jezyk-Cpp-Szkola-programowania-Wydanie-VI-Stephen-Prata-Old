#include <iostream>

int main() {
    struct pizza {
        std::string companyName;
        int diameter;
        int weight;
    };
    std::cout << "Proszę podać nazwę firmy produkującą pizzę: ";
    pizza myFavoritePizza;
    getline(std::cin, myFavoritePizza.companyName);
    std::cout << "Proszę podać średnicę pizzy: ";
    std::cin >> myFavoritePizza.diameter;
    std::cout << "Proszę podać wagę pizzy: ";
    std::cin >> myFavoritePizza.weight;
    std::cout << "\nOto wprowadzone dane:\n\n";
    std::cout << "Nazwa firmy: " << myFavoritePizza.companyName << std::endl;
    std::cout << "Średnica pizzy: " << myFavoritePizza.diameter << std::endl;
    std::cout << "Waga pizzy: " << myFavoritePizza.weight;
}
