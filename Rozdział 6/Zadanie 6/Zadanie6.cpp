#include <iostream>

int main() {
    struct donators {
        std::string fullName;
        double amount;
    };
    std::cout << "Proszę wprowadzić liczbę sponsorów: ";
    int sponsors;
    std::cin >> sponsors;
    donators* ptr = new donators[sponsors];
    for (int i = 0; i < sponsors; i++) {
        std::cout << "Proszę wprowadzić nazwisko sponsora: ";
        std::cin.get();
        getline(std::cin, ptr[i].fullName);
        std::cout << "Proszę podać kwotę osoby o nazwisku " << ptr[i].fullName << ": ";
        std::cin >> ptr[i].amount;
    }
    std::cout << "Nasi Wspaniali Sponsorzy\n\n";
    for (int i = 0; i < sponsors; i++) {
        if (ptr[i].amount >= 10000) {
            if (ptr[i].fullName == "")
                std::cout << "Nazwisko: brak\tWpłata: " << ptr[i].amount << " zł.\n";
            else
                std::cout << "Nazwisko: " << ptr[i].fullName << "\tWpłata: " << ptr[i].amount << " zł.\n";
        }
    }
    std::cout << "\nNasi Sponsorzy\n\n";
    for (int i = 0; i < sponsors; i++) {
        if (ptr[i].amount < 10000) {
            if (ptr[i].fullName == "")
                std::cout << "Nazwisko: brak\tWpłata: " << ptr[i].amount << " zł.\n";
            else
                std::cout << "Nazwisko: " << ptr[i].fullName << "\tWpłata: " << ptr[i].amount << " zł.\n";
        }
    }
    delete [] ptr;
}
