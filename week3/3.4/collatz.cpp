#include <iostream>

int main(){

    int n;
    int steps = 0;
    int max;
    std::cout << "Enter a number: ";
    std::cin >> n;

    max = n;


    while (n != 1) {
        steps = steps + 1;

        if (n % 2 == 0){
            n = n / 2;
        }
        else {
            n = (3 * n) + 1;
        }


        if (n > max) {
            max = n;
        }

        std::cout << n << std::endl;
    }

    std::cout << "It took " << steps << " steps!" << std::endl;
    std::cout << "The max value was: " << max;
}