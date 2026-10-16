#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int c2 = 1;
    while (c2 < n + 1){

        int c = 1;
        while (c < n + 1){
            std::cout << c * c2 << "\t"; 
            c++;
        }

        std::cout << std::endl;
        c2++;
    }
}