#include <iostream>

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double calculate(double x, double y, double (*ptr)(double, double));

int main() {
    const std::string OPERATIONS[3] = {"DODAWANIE", "ODEJMOWANIE", "MNOŻENIE"};
    double (*ptr[3])(double, double) = {&add, &subtract, &multiply};
    double firstNumber;
    double secondNumber;
    std::cout << "Proszę podać po kolei trzy pary liczb zmiennoprzecinkowych.\n\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "\nProszę wprowadzić pierwszą liczbę pary: ";
        std::cin >> firstNumber;
        std::cout << "Proszę wprowadzić drugą liczbę pary: ";
        std::cin >> secondNumber;
        std::cout << OPERATIONS[i] << " = " << calculate(firstNumber, secondNumber, ptr[i]) << std::endl;
    }
}

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double calculate(double x, double y, double (*ptr)(double, double)) {
    return (*ptr)(x, y);
}
