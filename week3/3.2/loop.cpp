#include <iostream>
int main(){
    int i = 10;
    while(i > 1){
        i = i * i;
        std::cout << i << std::endl;
    } 
    std::cout << "x" << std::endl;
    std::cout << INT_MAX;
}