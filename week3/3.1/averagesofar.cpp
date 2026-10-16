#include <iostream>

int main(){

    int input, n = 0;
    float total = 0;
    float average = 0;

    std::cout << "Enter a number: ";
    std::cin >> input;

    while(input != 0){
        n = n + 1;

        total = total + input;
        average = total / n;

        std::cout << average << std::endl;
        
        std::cout << "Enter a number: ";
        std::cin >> input;
    }
}