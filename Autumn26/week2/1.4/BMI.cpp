#include <iostream>

int main(){
    double height, weight;
    
    std::cout << "enter height: " << std::endl;
    std::cin >> height;
    std::cout << "enter weight: " << std::endl;
    std::cin >> weight;

    double BMI;
    BMI = weight / (height * height);

    std::cout << "BMI: " << BMI << std::endl; 
}