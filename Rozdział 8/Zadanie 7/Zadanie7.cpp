#include <iostream>

template <typename T>
T SumArray(const T array[], int size);

template <typename T>
T SumArray(const T * array[], int size);

int main() {
    struct debts {
        char name[50];
        double amount;
    };
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
            {
                    {"Ima Wolfe", 2400.0},
                    {"Ura Foxe", 1300.0},
                    {"Iby Stout", 1800.0}
            };
    const double * pd[3];
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    std::cout << "Wyliczanie rzeczy pana E:\n";
    std::cout << "\nSuma zawartości tablicy things: " << SumArray(things, 6) << std::endl;
    std::cout << "Łączna ilość przedmiotów : " << sizeof(things) / sizeof(things[0]) << std::endl;
    std::cout << "\nWyliczanie długów pana E:\n";
    std::cout << "\nDługi pana E wynoszą łącznie " << SumArray(pd, 3) << std::endl;
}

template <typename T>
T SumArray(const T array[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++)
        sum += array[i];
    return sum;
}

template <typename T>
T SumArray(const T * array[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++)
        sum += *array[i];
    return sum;
}
