#include <iostream>
#include <string>

int average(int a, int b) {    
    return (a + b) / 2;
}

int main() {
    
    int max = 1000;
    int min = 0;
    
    std::cout << "Think a number within the range 0 - 1000" << std::endl;

    int n = 500;
    int nextAsk = 500;
    std::string answer;


    while (min != max) {

        std::cout << "Is your number higher than " << nextAsk << std::endl;
        std::cout << "y/n: ";
        std::cin >> answer;

        if (answer == "y" || answer == "Y"){ 
            min = min + n;
        }
        else{
            max = max - n;
        }

        

        nextAsk = average(min, max);
        n = n / 2;

        if (n < 2){
            n = 1;
        }
    }

    std::cout << "Your number was: " << min;
}

