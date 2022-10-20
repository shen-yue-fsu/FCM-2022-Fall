// The implementation file

#include "my_library.h"



 


// Implementation of 'print vector'
void my_namespace::print_array_vec(std::vector<double> arr, int n){
    for(int i=0;i<n;i++){
    std::cout<< arr[i] << std::endl;
    }
    std::cout<< "\n"<< std::endl;
}


// Note that we have to include the header file in quotations at the beginning, and the names of the functions must be prepended by the namespace that we've given in the header file.



vector<double> my_namespace::f1(vector<double> x, int n){
    vector<double> y(n);
    
    for(int i=0;i<n;i++){
        y[i]=2.0 * x[i];
    }
    return y;
}





matrix my_namespace::matrix_product(matrix A, matrix B, int n){
    matrix C(n, vector<double>(n));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            C[i][j] = 0;
            for(int k=0;k<n;k++){
                C[i][j] = C[i][j] + A[i][k]* B[k][j];
            }
        }
    }
    return C;
}


void my_namespace::print_array_matrix(matrix A, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< A[i][j] <<" ";
        }
        cout<< "\n";
    }
}

void my_namespace::print_array_matrix_re(matrix A, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< A[i][j] <<" ";
        }
        cout<< "\n";
    }
}


