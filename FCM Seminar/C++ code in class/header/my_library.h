// The header file

// Put the declarations into a header file, here we call it my_library.h

#ifndef MY_LIBRARY_H
#define MY_LIBRARY_H

//Note the the function declarations are wrapped in conditional "macro" statments, #ifndef, #define, and #endif. You can think of this as protecting your library from being imported twice.

//More explanations: https:'//stackoverflow.com/questions/1653958/why-are-ifndef-and-define-used-in-c-header-files'

#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<double> > matrix;


//  Namespaces help to prevent naming clashes between separate libraries. When calling a function from a particular namespace, you must write the namespace followed by :: and then the function name.
//  This is why many standard library functions like <iostream> begin with std::



namespace my_namespace {


vector<double> f1(vector<double> x, int n);


void print_array_vec(vector<double> arr, int n);

matrix matrix_product(matrix A, matrix B, int n);

void print_array_matrix(matrix A, int n);

void print_array_matrix_re(matrix A, int n, int m);

}

#endif



