#include <iostream>

void modifyValues(int* x, int* y) {
    *x = 10; 
    *y = 20; 
}
int main() {
    int a = 5;
    int b = 15;

    std::cout << "Before calling modifyValues():" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    modifyValues(&a, &b);
    std::cout << "After calling modifyValues():" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    return 0;
}