#include <iostream>

int main() {
    int yearsCounter = 1;
    int dafne = 100;
    double cleo = 100.0;
    std::cout.precision(5);
    while (dafne >= cleo) {
        dafne += 10;
        cleo += cleo * 5 / 100;
        std::cout << "Zysk za rok #" << yearsCounter << ": \tDafne = " << dafne << "\tCleo = " << cleo << std::endl;
        yearsCounter++;
    }
}
