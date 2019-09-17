#include <iostream>

int main() {
    struct pizza {
        std::string companyName;
        int diameter;
        int weight;
    };
    std::cout << "Proszę podać średnicę pizzy: ";
    pizza * ptr = new pizza;
    (std::cin >> ptr->diameter).get();
    std::cout << "Proszę podać nazwę firmy produkującą pizzę: ";
    getline(std::cin, ptr->companyName);
    std::cout << "Proszę podać wagę pizzy: ";
    std::cin >> ptr->weight;
    std::cout << "\nOto wprowadzone dane:\n\n";
    std::cout << "Średnica pizzy: " << ptr->diameter << std::endl;
    std::cout << "Nazwa firmy: " << ptr->companyName << std::endl;
    std::cout << "Waga pizzy: " << ptr->weight;
    delete ptr;
}
