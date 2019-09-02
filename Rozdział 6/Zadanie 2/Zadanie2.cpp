#include <iostream>

int main() {
    std::cout << "Proszę wprowadzić 10 datków.\n";
    std::cout << "Datek #1: ";
    double donation[10];
    double sum = 0.0;
    int i = 0;
    while (i < 10 && std::cin >> donation[i]) {
        sum += donation[i];
        i++;
        if (i < 10)
            std::cout << "Datek #" << i + 1 << ": ";
    }
    if (i == 0)
        std::cout << "Średnia wartość wpłaconych datków wynosi 0\n";
    else
        std::cout << "Średnia wartość wpłaconych datków wynosi " << sum / i << std::endl;
    std::cout << "Lista datków, które są większe od ich średniej:\n";
    for (int j = 0; j < i; j++) {
        if (donation[j] > sum / i)
            std::cout << donation[j] << std::endl;
    }
}
