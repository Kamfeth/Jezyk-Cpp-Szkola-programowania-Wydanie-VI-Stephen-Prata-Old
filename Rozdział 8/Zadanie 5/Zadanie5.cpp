#include <iostream>

template <typename T>
T max5(const T array[]);

int main() {
    int primeNumbers[] = {29, 2137, 2, 5, 7};
    std::cout << "Największa wartość tablicy typu int wynosi " << max5(primeNumbers) << std::endl;
    double randomNumbers[] = {6.62, 9.12, 13.02, 134.6, 2.01};
    std::cout << "Największa wartość tablicy typu double wynosi " << max5(randomNumbers) << std::endl;
}

template <typename T>
T max5(const T array[]) {
    T biggestValue = array[0];
    for (int i = 1; i < 5; i++) {
        if (array[i] > biggestValue)
            biggestValue = array[i];
    }
    return biggestValue;
}
