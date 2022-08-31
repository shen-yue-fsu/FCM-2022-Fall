#include <iostream>

int main() {
    int a = 6; // initialize a to 6.
    unsigned int b = 1; // initialize b to 7.
    int c; // declare c to be an integer variable.
    
    a = 6;
    b = 7;
    
    
    std::cout << "\nInput:" << std::endl;
    std::cout << "int a=6;" << std::endl;
    std::cout << "unsigned int b=7;" << std::endl;
    std::cout << "int c; \n" << std::endl;
    
    std::cout << "Results:" << std::endl;
    c=a/b;//c is 0
    std::cout << "c=a/b; ---> c=" << c << std::endl;
    
    c=b/a;//c is 1
    std::cout << "c=b/a; ---> c=" << c << std::endl;
    
    c = b%a; // c is 1 (% is the integer remainder or modulo operator)
    std::cout << "c=b%a; ---> c=" << c << " (% is the integer remainder or modulo operator)" << std::endl;
    
    c=a-b;//c is -1
    std::cout << "c=a-b; ---> c=" << c << std::endl;
    
    c=a>b;//c is 0(boolean gets cast to integer)
    std::cout << "c=a>b; ---> c=" << c  << "  (boolean gets cast to integer)" << std::endl;
    
    c=a<b;//cis1(boolean gets cast to integer)
    std::cout << "c=a<b; ---> c=" << c <<  "  (boolean gets cast to integer)" << std::endl;
    
    c=1;
    c++;       // c is 2 (++ is shorthand for c = c + 1)
    std::cout << "c=1; c++; ---> c=" << c << " (++ is shorthand for c = c + 1)" <<std::endl;
    
    
    b = a - b; // b is 4294967295 (-1 gets cast to unsigned)
    std::cout << "b=a-b; ---> b=" << b  << "  (-1 gets cast to unsigned)"<< std::endl;
    b = b + 1; // b is 0 (b was previously the largest unsigned,
    std::cout << "b=b+1; ---> b=" << b <<  " (b was previously the largest unsigned, so adding one circles it back to zero.)"<<std::endl;
              // so adding one circles it back to zero.)
    b+=7; // b is 7 (+= is shorthand for b = b + 7;
    std::cout << "b+=7; b:" << b <<  " (+= is shorthand for b = b + 7;) "<<std::endl;
    std::cout << "\n" << std::endl;
 
    
    return 0;
}
