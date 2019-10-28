#include <bits/stdc++.h>
#include "sales.h"

void setSales(SALES::Sales & s, const double ar[], int n) {
    double minimalValue = DBL_MAX;
    double maximalValue = DBL_MIN;
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += ar[i];
        if (minimalValue > ar[i])
            minimalValue = ar[i];
        if (maximalValue < ar[i])
            maximalValue = ar[i];
    }
    s.sales[0] = minimalValue;
    s.sales[1] = s.sales[2] = s.sales[3] = 0.0;
    s.min = minimalValue;
    s.max = maximalValue;
    s.average = sum / n;
}

void setSales(SALES::Sales & s) {
    std::cout << "Proszę wprowadzić cztery wartości dla każdego z kwartałów: ";
    double minimalValue = DBL_MAX;
    double maximalValue = DBL_MIN;
    double sum = 0.0;
    for (int i = 0; i < 4; i++) {
        std::cout << "Kwartał #" << i + 1 << ": ";
        std::cin >> s.sales[i];
        sum += s.sales[i];
        if (minimalValue > s.sales[i])
            minimalValue = s.sales[i];
        if (maximalValue < s.sales[i])
            maximalValue = s.sales[i];
    }
    s.min = minimalValue;
    s.max = maximalValue;
    s.average = sum / 4;
}

void showSales(const SALES::Sales & s) {
    for (int i = 0; i < 4; i++)
        std::cout << "Wartość kwartału #" << i + 1 << ": " << s.sales[i] << std::endl;
    std::cout << "Średnia tych wartości wynosi: " << s.average << std::endl;
    std::cout << "Wartość minimalna tych wartości wynosi: " << s.min << std::endl;
    std::cout << "Wartość maksymalna tych wartości wynosi: " << s.max << std::endl;
}
