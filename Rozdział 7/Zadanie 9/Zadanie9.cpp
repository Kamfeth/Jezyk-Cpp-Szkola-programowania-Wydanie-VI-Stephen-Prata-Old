#include <iostream>

const int SLEN = 30;

struct student {
    char fullName[SLEN];
    char hobby[SLEN];
    int oopLevel;
};

int getInfo(student pa[], int size);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int size);

int main() {
    std::cout << "Podaj wielkość grupy: ";
    int classSize;
    std::cin >> classSize;
    while (std::cin.get() != '\n')
        continue;
    student* ptrStu = new student[classSize];
    int entered = getInfo(ptrStu, classSize);
    for (int i = 0; i < entered; i++) {
        display1(ptrStu[i]);
        display2(&ptrStu[i]);
    }
    display3(ptrStu, entered);
    std::cout << "Gotowe!";
    delete [] ptrStu;
}

int getInfo(student pa[], int size) {
    std::cout << "Proszę wprowadzić dane wszystkich studentów. Wprowadzenie pustego nazwiska kończy wprowadzanie danych.\n";
    std::cout << "\nWprowadź imię i nazwisko studenta #1: ";
    int i = 0;
    while (std::cin.getline(pa[i].fullName, SLEN) && pa[i].fullName[0] != '\0' && i < size) {
        std::cout << "Podaj hobby ucznia: ";
        std::cin.getline(pa[i].hobby, SLEN);
        std::cout << "Podaj liczbowy poziom biegłości w programowaniu obiektowym: ";
        std::cin >> pa[i].oopLevel;
        i++;
        if (i < size) {
            std::cin.get();
            std::cout << "\nWprowadź imię i nazwisko studenta #" << i + 1 << ": ";
        }
    }
    return i;
}

void display1(student st) {
    std::cout << "\nImię i nazwisko studenta: " << st.fullName << std::endl;
    std::cout << "Hobby studenta: " << st.hobby << std::endl;
    std::cout << "Poziom opanowania programowania obiektowego: " << st.oopLevel << std::endl;
}

void display2(const student* ps) {
    std::cout << "\nImię i nazwisko studenta: " << ps->fullName << std::endl;
    std::cout << "Hobby studenta: " << ps->hobby << std::endl;
    std::cout << "Poziom opanowania programowania obiektowego: " << ps->oopLevel << std::endl;
}

void display3(const student pa[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "\nStudent #" << i + 1 << ":\n\n";
        std::cout << "Imię i nazwisko studenta: " << pa[i].fullName << std::endl;
        std::cout << "Hobby studenta: " << pa[i].hobby << std::endl;
        std::cout << "Poziom opanowania programowania obiektowego: " << pa[i].oopLevel << std::endl;
    }
}
