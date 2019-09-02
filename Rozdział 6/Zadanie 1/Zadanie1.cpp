#include <iostream>

int main() {
    std::cout << "Proszę wprowadzać dane. Znak @ kończy działanie programu: ";
    char ch;
    while (std::cin.get(ch) && ch != '@') {
        if (islower(ch))
            ch = toupper(ch);
        else
            ch = tolower(ch);
        if (!isdigit(ch))
            std::cout << ch;
    }
}
