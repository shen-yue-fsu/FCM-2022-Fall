#include <iostream>
#include <vector>


//  Namespaces help to prevent naming clashes between separate libraries. When calling a function from a particular namespace, you must write the namespace followed by :: and then the function name.
//  This is why many standard library functions like <iostream> begin with std::

using namespace std;

// vector is a class template
// Vectors are the same as dynamic arrays with the ability to resize themselves automatically when an element is inserted or deleted, with their storage being handled automatically by the container.


void print_array_vec(vector<double> arr, int n);
vector<double> f1(vector<double> x, int n);

int main(){
    
    int n = 5;
    
  // initialize: make room for n elements
  vector<double> array_1(n);
    for (int i=0;i<n;i++){
        array_1[i] = i + 1.0;
    }
    cout<< "array_1 : "<<endl;
    print_array_vec(array_1,n);
    
    
    // Create an empty vector
    vector<double> array_2;
    for(int i=0;i<n;i++){
        array_2.push_back(i+1);//push values one by one
    }
    cout<< "array_2 : "<<endl;
    print_array_vec(array_2,n);
    
    
    cout<< "size of array_2 is: "<< array_2.size() << "\n" <<endl;
    
    
    array_2.push_back(6.0);// add an element at the end
    
    cout<< "After adding 6 to the end of the array, size of array_2 is: "<< array_2.size() <<endl;
    print_array_vec(array_2,array_2.size() );
    
    
    array_2.pop_back(); // delete the last element
    
    cout<< "After delete 6 to the end of the array,,size of array_2 is: "<< array_2.size() <<endl;
    print_array_vec(array_2,array_2.size());
    

    
    
    
    
    
  
    
    
    
    vector<double> s(2);
    s[0]=-1.0;
    s[1]=2.0;
    
    vector<double> t;
    
    // t_i = 2 * s_i
    t=f1(s,2);
    
    
    cout<< "t="<<endl;
    print_array_vec(t,2);
    
    
    
   

    //As you see, vector combines the advantages of both the static and the dynamic array because it takes a non-const size parameter such as the dynamic one and automatically deletes the used memory like the static one.
    
    return 0;
}




void print_array_vec(std::vector<double> arr, int n){
    for(int i=0;i<n;i++){
    std::cout<< arr[i] << std::endl;
    }
    std::cout<< "\n"<< std::endl;
}



vector<double> f1(vector<double> x, int n){
    vector<double> y(n);
    
    for(int i=0;i<n;i++){
        y[i]=2.0 * x[i];
    }
    return y;
}
