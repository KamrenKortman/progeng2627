#include <iostream>

int main() {

    int x; 
    std::cin >> x;
    int total = 1;

    for (int i = 0; i < x; i++)
    {
        total = total * (x - i);
    }
    
    std::cout << total;
}