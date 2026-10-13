#include <iostream>

int main(){
    double n1, n2;
    double perimeter, area;
    
    std::cout << "please enter first side length: " << std::endl;
    std::cin >> n1;

    std::cout << "please enter second side length: " << std::endl;
    std::cin >> n2;

    area = n1 * n2;
    perimeter = 2 * (n1 + n2);
    

    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimter: "  << perimeter << std::endl; 
}