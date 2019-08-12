#include <iostream>

int changeToAstronomicalUnits(double distanceInLightYears);

int main() {
	std::cout << "Podaj liczbę lat świetlnych: ";
	double lightYears;
	std::cin >> lightYears;
	std::cout << lightYears << " lat świetlnych = " << changeToAstronomicalUnits(lightYears) << " jednostek astronomicznych.";
}

int changeToAstronomicalUnits(double distanceInLightYears) {
	return distanceInLightYears * 63240;
}
