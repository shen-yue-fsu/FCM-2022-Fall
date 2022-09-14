#include <iostream>


//This is the function declaration

//'fun' returns an array of evaulating f(x) at x=[x1,x2]' where f(x)=[x1+x2, x1-x2]'.
double * fun(double x1, double x2);

// 'void' is a function with no return type.
// 'print_array' takes an array and prints it to std out.

void print_array(double *arr);

int main(){
    double *y; // pointer to hold address
    y = fun(-1.0,2.0);
    print_array(y);
    delete [] y;
    
    return 0;
}

// Here, we have declared the function f() with a return type double *(pointer) and in its definition, we have returned arr (serves as both array name and base address) to site of the function call in main().


// Implementation of 'fun'.
double * fun(double x1, double x2){
    
// array initialisation
    double *arr = new double [2];
    arr[0] =  x1 + x2;
    arr[1] = x1 - x2;
    
    return arr;  // address of arr returned
}


// Implementation of 'print_array'.
void print_array(double * arr){
    std::cout<< arr[0]<< "\n" << arr[1] << std::endl;
}
