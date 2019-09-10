#include <iostream>

long double probability(int numbers, int picks, int powerBall);

int main() {
    int setOfNumbers;
    int choices;
    int powerBall;
    std::cout << "Podaj największą liczbę jaką można wybrać, liczbę skreśleń oraz zbiór liczb dla megaliczby: ";
    while (std::cin >> setOfNumbers >> choices >> powerBall && choices <= setOfNumbers) {
        std::cout << "Szansa wygranej to jeden do " << probability(setOfNumbers, choices, powerBall)<< ".\n";
        std::cout << "Następne trzy liczby (q, aby zakończyć): ";
    }
    std::cout << "Do widzenia!";
}

long double probability(int numbers, int picks, int powerBall) {
    long double result = 1.0;
    long double n;
    int p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result *= n / p ;
    return result * powerBall;
}
