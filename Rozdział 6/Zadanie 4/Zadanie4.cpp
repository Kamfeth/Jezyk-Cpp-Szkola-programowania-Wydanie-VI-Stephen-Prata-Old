#include <iostream>

const int SIZE = 26;
struct zpdw {
    char name[SIZE];
    char position[SIZE];
    char nickname[SIZE];
    int preference;
};
void showAnswer(char choice);

int main() {
    std::cout << "Zakon Programistów Dobrej Woli\n";
    std::cout << "a. lista wg imion\tb. lista wg stanowisk\n";
    std::cout << "c. lista wg pseudonimów\td. lista wg preferencji\n";
    std::cout << "q. koniec\n";
    std::cout << "Wybierz jedną z opcji: ";
    char choice;
    while (std::cin >> choice && tolower(choice) != 'q') {
        choice = tolower(choice);
        showAnswer(choice);
        std::cout << "Wybierz jedną z opcji: ";
    }
    std::cout << "Do zobaczenia!";
}

void showAnswer(char choice) {
    zpdw members[5] = {
        {"Wimp Macho", "Grafik komputerowy", "f0rest", 0},
        {"Raki Rhodes", "Młodszy programista", "Kamfeth", 1},
        {"Celia Laiter", "Tester", "MIPS", 2},
        {"Hoppy Hipman", "Szkoleniowiec analityków", "Xyp9x", 1},
        {"Pat Hand", "Administrator sieci", "L00PY", 2}
    };
    switch (choice) {
        case 'a':
            for (int i = 0; i < 5; i++)
                std::cout << members[i].name << std::endl;
            break;
        case 'b':
            for (int i = 0; i < 5; i++)
                std::cout << members[i].position << std::endl;
            break;
        case 'c':
            for (int i = 0; i < 5; i++)
                std::cout << members[i].nickname << std::endl;
            break;
        case 'd':
            for (int i = 0; i < 5; i++) {
                switch (members[i].preference) {
                    case 0:
                        std::cout << members[i].name << std::endl;
                        break;
                    case 1:
                        std::cout << members[i].position << std::endl;
                        break;
                    case 2:
                        std::cout << members[i].nickname << std::endl;
                }
            }
    }
}
