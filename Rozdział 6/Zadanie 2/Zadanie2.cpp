#include <iostream>

int main() {
    std::cout << "Proszę wprowadzić 10 datków.\n";
    std::cout << "Datek #1: ";
    double donations[10];
    double sum = 0.0;
    int i = 0;
    while (i < 10 && std::cin >> donations[i]) {
        sum += donations[i];
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
        if (donations[j] > sum / i)
            std::cout << donations[j] << std::endl;
    }
}
