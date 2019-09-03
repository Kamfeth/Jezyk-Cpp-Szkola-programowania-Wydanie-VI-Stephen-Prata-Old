#include <bits/stdc++.h>

int main() {
    struct donators {
        std::string fullName;
        double amount;
    };
    std::ifstream file;
    file.open("sponsors");
    int sponsors;
    file >> sponsors;
    donators* ptr = new donators[sponsors];
    for (int i = 0; i < sponsors; i++) {
        file.get();
        getline(file, ptr[i].fullName);
        file >> ptr[i].amount;
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
    file.close();
    delete [] ptr;
}
