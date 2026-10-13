#include <iostream>

int main(){
    double n1, euros;
    
    std::cout << "please enter an amount in pounds: " << std::endl;
    std::cin >> n1;

    euros = n1 * 1.18;
    
    std::cout << "Amount in Euros: " << euros << std::endl; 
}