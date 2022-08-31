#include <iostream>

int main() {
    double * a;
    double b = 7.3;
    double c;
    double **d;

    // Now `a` holds the memory address of `b`.
    a = &b;

    // `*a` obtains the value of the variable
    // at the memory address held by `a`.
    // So, `c` is 7.3.
    c = *a;
    d=&a;
    
    std::cout << d << "\n";
    
    return 0;
}
