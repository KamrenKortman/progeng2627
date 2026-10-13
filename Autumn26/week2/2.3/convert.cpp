#include <iostream>
#include <string>

int main(){

    double temp_in, temp_out;
    bool validUnit = true;
    std::string unit_in, unit_out;

    std::cin >> temp_in >> unit_in;

    if(unit_in == "C" || unit_in == "c"){
        unit_out = "F";
        temp_out = (temp_in * 9/5) + 32;
    }
    else if (unit_in == "F" || unit_in == "f"){
        unit_out = "C";
        temp_out = (temp_in - 32) * 5/9;
    }
    else{
        std::cout << "Unit not recognised.";
        validUnit = false;
    }

    if (validUnit == true) {
        std::cout << temp_out << " " << unit_out << std::endl;
    }    
}