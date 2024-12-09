//Write a function that takes a temperature in Celcius units, and returns the corresponding Fahrenheit degree.

#include <iostream>
int CelciusToFahrenheit(int celcius) {
    return (celcius * 9 / 5) + 32;
}

int main() {

    int celcius;
    std::cout <<"Enter the temperature in Celcius: ";
    std::cin >> celcius;

    std::cout << CelciusToFahrenheit(celcius);

    return 0;
}