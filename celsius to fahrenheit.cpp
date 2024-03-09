#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}
int main() {
    double celsius;
    // Input temperature in Celsius
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;
    double fahrenheit = celsiusToFahrenheit(celsius);
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
    return 0;
}