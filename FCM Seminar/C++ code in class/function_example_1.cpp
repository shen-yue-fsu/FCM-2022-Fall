#include <iostream>


//This is the function declaration

//'addition' returns sum of a and b.
double addition(double a, double b);


// 'void' is a function with no return type.
// 'print_array' takes an array and prints it to std out.
void print_x(double x);


int main(){
    double s = 1.2;
    double t = 5.1;
    double c;
    c = addition(s, t);
    print_x(c);
    
    return 0;
}

//Implementation of 'addition'
double addition(double a, double b){
    double c;
    c = a + b;
    return c;
}


// Implementation of 'print_x'.
void print_x(double x){
        std::cout<< x << std::endl;
}
