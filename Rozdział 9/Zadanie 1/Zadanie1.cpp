#include <iostream>
#include "golf.h"

int main() {
    golf players[6];
    int i = 0;
    while (i < 5 && setgolf(players[i]))
        showgolf(players[i++]);
    std::cout << "\nWprowadzenie danych nowego gracza na podstawie argumentów wywołania:\n";
    setgolf(players[i], "Kamil Paradowski", 21);
    showgolf(players[i]);
    std::cout << "\nModyfikacja parametru handicap na wartość 37 za pomocą funkcji handicap:\n";
    handicap(players[i], 37);
    showgolf(players[i]);
}
