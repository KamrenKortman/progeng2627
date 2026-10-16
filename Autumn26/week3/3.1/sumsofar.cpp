#include <iostream>

int main(){

    int input, total = 0;

    std::cout << "Enter a number: ";
    std::cin >> input;

    while(input != 0){

        total = total + input;
        std::cout << total << std::endl;
        
        std::cout << "Enter a number: ";
        std::cin >> input;
    }
}