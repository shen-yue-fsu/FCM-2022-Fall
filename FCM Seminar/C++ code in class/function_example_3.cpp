#include <iostream>


//This is the function declaration

//'f1' returns an array of evaulating f at (x,y)' where f(x,y)=x+y.
double * f1(double *x,double *y, int n);


// 'void' is a function with no return type.
// 'f2' updates array x and array y as x_i=2*t_i and y_i=x_t_i+1
void f2(double *t, double *x, double *y, int n);


// 'print_array' takes an array and prints it to std out.

void print_array(double *arr, int n);

int main(){
    int n = 5;
    double *t = new double [n];
    double *s = new double [n];

    // t=[0,1,2,3,4]' and s=[1,1,1,1,1]'
    for(int i=0;i<n;i++){
        t[i] = i;
        s[i] = 1.0;
    }
    double *z;
    z = f1(t,s,n);  // z=t+s
    std::cout<< "z is "<< std::endl;
    print_array(z,n);
    
    double *x = new double [n];
    double *y = new double [n];
    
    f2(t, x, y, n); // update x and y with x=2*t and y_i=x_i+t_i+1
    std::cout<< "x is "<< std::endl;
    print_array(x,n);
    std::cout<< "y is "<< std::endl;
    print_array(y,n);
    
    
    return 0;
}


// Implementation of 'f1'.
//'f1' returns an array of evaulating f at (x,y)' where f(x,y)=x+y.
// Input: array x and y, array size n
// Output: array f
double * f1(double *x,double *y, int n){
    
// array initialisation
    double *f = new double [n];
    for(int i=0;i<n;i++){
        f[i] = x[i] + y[i];
    }
    return f;  // address of f returned
}


// Implementation of 'f2'.
// array t and its size n are given in the main function
// update array x and y by x_i = 2 * t_i and y_i = x_i + t_i + 1
// Note: no return value or array
void f2(double *t, double *x, double *y, int n){
    for(int i=0;i<n;i++){
        x[i] = 2.0 * t[i];
        y[i] = x[i] + t[i] + 1.0;
    }
}


// Implementation of 'print_array'.
void print_array(double * arr, int n){
    for(int i=0;i<n;i++){
    std::cout<< arr[i] << std::endl;
    }
    std::cout<< "\n"<< std::endl;
}


