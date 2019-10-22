#include <bits/stdc++.h>

template <typename T>
T maxn(const T array[], int size);

template <> const char * maxn(const char * const strings[], int size);

int main() {
    int primeNumbers[] = {29, 2137, 2, 5, 7};
    std::cout << "Największa wartość tablicy typu int wynosi " << maxn(primeNumbers, 5) << std::endl;
    double randomNumbers[] = {6.62, 9.12, 134.6, 2.01};
    std::cout << "Największa wartość tablicy typu double wynosi " << maxn(randomNumbers, 4) << std::endl;
    const char * strings[] = {"Kamil", "Paradowski", "Zgorzelec", "Drzewo", "Spodnie"};
    std::cout << "Najdłuższy łańcuch z tablicy typu char to " << maxn(strings, 5) << std::endl;
}

template <typename T>
T maxn(const T array[], int size) {
    T biggestValue = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > biggestValue)
            biggestValue = array[i];
    }
    return biggestValue;
}

template <> const char * maxn(const char * const strings[], int size) {
    const char * longestString = strings[0];
    for (int i = 1; i < size; i++) {
        if (strlen(strings[i]) > strlen(longestString))
            longestString = strings[i];
    }
    return longestString;
}
