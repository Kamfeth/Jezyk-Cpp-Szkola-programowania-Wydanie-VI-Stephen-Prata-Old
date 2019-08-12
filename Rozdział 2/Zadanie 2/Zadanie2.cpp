#include <iostream>

int main() {
	std::cout << "Proszę podać odległość w milach morskich: ";
	int distance;
	std::cin >> distance;
	distance *= 1852;
}
