#include <bits/stdc++.h>

struct stringy {
    char * str;
    int ct;
};

void set(stringy & beany, const char * testing);
void show(const stringy & beany, int times = 1);
void show(const char * str, int times = 1);

int main() {
    stringy beany;
    char testing[] = "Rzeczywistość to już nie to, co kiedyś.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    delete [] beany.str;
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Gotowe!");
}

void set(stringy & beany, const char * testing) {
    char * ptr = new char[strlen(testing) + 1];
    beany.str = ptr;
    strcpy(beany.str, testing);
    beany.ct = strlen(testing);
}

void show(const stringy & beany, int times) {
    for (int i = 0; i < times; i++)
        std::cout << "Łańcuch #" << i + 1 << ": " << beany.str << std::endl;
    std::cout << std::endl;
}

void show(const char * str, int times) {
    for (int i = 0; i < times; i++)
        std::cout << "Łańcuch #" << i + 1 << ": " << str << std::endl;
    std::cout << std::endl;
}
