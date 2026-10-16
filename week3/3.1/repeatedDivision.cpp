#include <iostream>

int main(){
    int number, divisor, n = 0;

    std::cin >> number;
    std::cin >> divisor;

    while (number > divisor) {
        number = number - divisor;
        n = n + 1;
    }

    std::cout << "Result: " << n << std::endl;
    std::cout << "Remainder: " << number;
}
