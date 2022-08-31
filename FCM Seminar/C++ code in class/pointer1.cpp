#include <iostream>

int main() {
    double *ip;
    double val;
    double a;

    val = 7;
    ip = &val;
    a = val;
    
    std::cout << "Value of val variable: ";
    std::cout << val << std::endl;
     
    // Prints some memory address (starts with 0x)
    std::cout << "Address stored in ip variable: ";
    std::cout << ip << std::endl;
     
    std::cout << "Value of *ip variable: ";
    std::cout << *ip << std::endl;

    
    return 0;
}
