#include <iostream>

void showString(const char * str, int number = 0);

int main() {
    std::cout << "Wywołanie funkcji bez podania drugiego parametru.\n\n";
    showString("Kamil Paradowski");
    std::cout << "\nPonowne wywołanie funkcji bez podania drugiego argumentu.\n\n";
    showString("Wrocław");
    std::cout << "\nWywołanie funkcji, tym razem z użyciem drugiego parametru. Funkcja powinna wyświetlić łańcuch trzy razy.\n\n";
    showString("C++ jest naprawdę ciekawy.", 2137);
    std::cout << "\nPonowne wywołanie funkcji, drugi parametr jest równy 0.\n\n";
    showString("Bieganie jest bardzo fajne!", 0);
    std::cout << "\nWywołanie funkcji z podaniem drugiego parametru jako liczba różna od zera. Funkcja powinna wyświetlić łańcuch pięć razy.\n\n";
    showString("Życie jest piękne!", 25);
}

void showString(const char * str, int number) {
    static int functionCallCounter = 1;
    if (number != 0) {
        for (int i = 0; i < functionCallCounter; i++)
            std::cout << str << std::endl;
    } else
        std::cout << str << std::endl;
    functionCallCounter++;
}
