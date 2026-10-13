#include <iostream>

int main(){
    double C, F;
    
    std::cout << "please enter Temperature in celsius: " << std::endl;
    std::cin >> C;

    F = C * 9.0/5.0 + 32;
    
    std::cout << "Fahrenheit: " << F << std::endl; 
}