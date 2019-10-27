#include <bits/stdc++.h>

int main() {
    struct chaff {
        char dross[20];
        int slag;
    };
    char memory[100];
    chaff * firstPtr = new (memory) chaff[2];
    strcpy(firstPtr[0].dross, "Biurko");
    strcpy(firstPtr[1].dross, "Podwórko");
    firstPtr[0].slag = 17;
    firstPtr[1].slag = 31;
    chaff * secondPtr = new chaff[2];
    strcpy(secondPtr[0].dross, "Marker");
    strcpy(secondPtr[1].dross, "Kubek");
    secondPtr[0].slag = 65;
    secondPtr[1].slag = 49;
    for (int i = 0; i < 2; i++) {
        std::cout << "\nWartości składowe wskaźnika firstPtr:\n";
        std::cout << "Łańcuch znaków: " << firstPtr[i].dross << std::endl;
        std::cout << "Liczba całkowita: " << firstPtr[i].slag << std::endl;
        std::cout << "\nWartości składowe wskaźnika secondPtr:\n";
        std::cout << "Łańcuch znaków: " << secondPtr[i].dross << std::endl;
        std::cout << "Liczba całkowita: " << secondPtr[i].slag << std::endl;
    }
    delete [] secondPtr;
}
