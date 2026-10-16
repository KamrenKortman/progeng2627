#include <iostream>

int main() {

    int x = 1; 
    int n = 0;
    std::cin >> x;
    std::cin >> n; 

    int total = 1;


    for (int i = 0; i < n; i++)
    {
        total = total * x;
    }

    std::cout << total;
    
}