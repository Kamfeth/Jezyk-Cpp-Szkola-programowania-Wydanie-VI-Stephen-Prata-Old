#include <bits/stdc++.h>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g) {
    std::cout << "\nProszę wprowadzić imię i nazwisko gracza: ";
    char * fullname;
    std::cin.getline(fullname, Len);
    std::cout << "Teraz proszę wprowadzić wartość handicap: ";
    int handicap;
    std::cin >> handicap;
    setgolf(g, fullname, handicap);
    std::cin.ignore();
    if (strcmp(g.fullname, ""))
        return 1;
    else
        return 0;
}

void handicap(golf & g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf & g) {
    std::cout << "\nImię i nazwisko gracza: " << g.fullname << std::endl;
    std::cout << "Wartość handicap: " << g.handicap << std::endl;
}
