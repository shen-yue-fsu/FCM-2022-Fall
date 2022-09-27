#include <iostream>
#include <vector>
#include <random>

using namespace std;


typedef vector< vector<double> > matrix;

void print_array_vec(vector<double> arr, int n);
void print_array_matrix(matrix A, int n);
matrix matrix_product(matrix A, matrix B, int n);
void print_array_matrix_re(matrix A, int n, int m);

int main(){
    double a = -5.0;
    double b = 5.0;
    
    std:: default_random_engine generator(time(0));
    std:: uniform_real_distribution <double> distribution(a,b);
    
    int n = 3;
    
    // initialize: make room for n*n elements
   matrix A(n, vector<double>(n));
 //i.e.   vector< vector<double> > A(n, vector<double>(n));
    
    // initialize: make room for 3*4 elements
    matrix M(3, vector<double>(4));
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            M[i][j] = distribution(generator);
        }
    }
    cout<< "M="<<endl;
    print_array_matrix_re(M,3,4);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            A[i][j] = distribution(generator);
        }
    }
    cout<< "\nA="<<endl;
    print_array_matrix(A,n);
    
    matrix I(n, vector<double>(n));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                I[i][i]=1.0;
            }
            else{
                I[i][j]=0;
            }
        }
    }
    
    cout<< "\nI="<<endl;
    print_array_matrix(I,n);
    
    matrix C(n, vector<double>(n));
    cout<< "\nC="<<endl;
    C = matrix_product(A, I, n);
    print_array_matrix(C,n);
    return 0;
}




void print_array_matrix(matrix A, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cout<< A[i][j] <<" ";
        }
        std::cout<< "\n";
    }
}

void print_array_matrix_re(matrix A, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            std::cout<< A[i][j] <<" ";
        }
        std::cout<< "\n";
    }
}

matrix matrix_product(matrix A, matrix B, int n){
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








void print_array_vec(std::vector<double> arr, int n){
    for(int i=0;i<n;i++){
    std::cout<< arr[i] << std::endl;
    }
    std::cout<< "\n"<< std::endl;
}


