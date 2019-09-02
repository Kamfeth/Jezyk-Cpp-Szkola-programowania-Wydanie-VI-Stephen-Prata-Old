#include <iostream>

void showAnswer();

int main() {
    std::cout << "r) roślinożerca\t\tp) pianista\n";
    std::cout << "d) drzewo\t\tg) gra\n";
    showAnswer();
}

void showAnswer() {
    std::cout << "Proszę podać literę r, p, t lub g: ";
    char choice;
    std::cin >> choice;
    if (isupper(choice))
        choice = tolower(choice);
    switch (choice) {
        case 'r':
            std::cout << "Jeleń jest roślinożercą.";
            break;
        case 'p':
            std::cout << "Ludwig van Beethoven był słynnym pianistą.";
            break;
        case 'd':
            std::cout << "Klon to drzewo.";
            break;
        case 'g':
            std::cout << "Gry uczą logicznego myślenia.";
            break;
        default:
            showAnswer();
    }
}
