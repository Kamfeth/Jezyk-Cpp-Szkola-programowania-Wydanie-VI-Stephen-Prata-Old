#include <iostream>

void firstMessage();
void secondMessage();

int main() {
    firstMessage();
    firstMessage();
    secondMessage();
    secondMessage();
}

void firstMessage() {
    std::cout << "Entliczek pentliczek\n";
}

void secondMessage() {
    std::cout << "Czerwony stoliczek\n";
}
