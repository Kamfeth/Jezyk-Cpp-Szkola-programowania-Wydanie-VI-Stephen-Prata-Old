#include <bits/stdc++.h>

void setArray(std::vector<int> & results);
void showArray(std::vector<int> results);
double arithmeticMean(std::vector<int> results);

int main() {
    std::vector<int> results;
    setArray(results);
    showArray(results);
}

void setArray(std::vector<int> & results) {
    std::cout << "Proszę wprowadzić do 10 wyników golfowych, wprowadzenie wartości nieliczbowej kończy wprowadzanie danych:\n";
    std::cout << "Wprowadź wynik #1: ";
    int result;
    while (results.size() < 10 && std::cin >> result) {
        results.push_back(result);
        if (results.size() < 10)
            std::cout << "Wprowadź wynik #" << results.size() + 1 << ": ";
    }
}

void showArray(std::vector<int> results) {
    std::cout << "Wprowadzono łącznie " << results.size() << " wyników, wyglądają one następująco:\n";
    for (int result : results)
        std::cout << result << " ";
    std::cout << "\nŚrednia wszystkich wyników wynosi " << arithmeticMean(results);
}

double arithmeticMean(std::vector<int> results) {
    double sum = 0;
    for (int result : results)
        sum += result;
    if (results.size() == 0)
        return 0.0;
    return sum / results.size();
}
