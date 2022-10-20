#include <iostream>
#include <vector>
#include "my_library.h"


//  Namespaces help to prevent naming clashes between separate libraries. When calling a function from a particular namespace, you must write the namespace followed by :: and then the function name.
//  This is why many standard library functions like <iostream> begin with std::

using namespace my_namespace;

int main(){
    
    int n = 5;
    
    
    cout<< "---------------- Initialize ---------------"<<endl;
    
  // initialize: make room for n elements
  vector<double> vec_1(n);
// vec_1=[1,2,3,4,5]'
    for (int i=0;i<n;i++){
        vec_1[i] = i + 1.0;
    }
    cout<< "array_1 : \n"<<endl;
    my_namespace::print_array_vec(vec_1,n);
    
    
    // Create an empty vector
    vector<double> vec_2;
    // vec_2=[0,2,4,6,8]'
    for(int i=0;i<n;i++){
        vec_2.push_back(i*2);//push values one by one
    }
    cout<< "vec_2: \n"<<endl;
    print_array_vec(vec_2,n);
    
    
    // push_back() function: adds an element to the end of the vector
    // pop_back() function: delete the last element from the vector
    
    
    //Create a vector that all the elements are the same.
    // vector_one has n elements and all of them are 1.
    //vector_one=[1,1,1,1,1]'
    vector<double> vector_one(n,1.0);
    cout<< "vector_one: \n"<<endl;
    print_array_vec(vector_one,n);
    
    
    
    
    
    cout << "\n\n\n"<<endl;
    
    
    
  
    
    
    cout<< "----------------- access element ----------------"<<endl;
    // Access elements of a vector
    
    
    
    cout<< "access element: ";
    cout<< vec_1[5]<<endl;
  //  cout<< vec_1.at(5)<<endl;
    // the at() function throws an exception whenever the vector is out of bound, while [] gives a garbage value.
    
    
    cout << "\n\n\n"<<endl;
    cout<< "----------------- change element --------------"<<endl;
    
    cout<< "Original vec_1: \n";
    print_array_vec(vec_1,vec_1.size());

    
    // Change vector element
   vec_1.at(1) = 10.0;
    cout<< "New vec_1: \n";
   print_array_vec(vec_1,vec_1.size());
    
    cout << "\n\n\n"<<endl;
    cout<< "---------------- Some vector functions --------------"<<endl;
    
    cout<< "vec_2: \n";
    print_array_vec(vec_2,vec_2.size());

    //some vector functions
    // return the number of elements present in the vector
    cout << "\n size() returns the number of elements present in vec_2:\n ";
    cout<< vec_2.size() <<endl;
    
    //return the first element of the vector
    cout << "\n front() returns the first element of vec_2:\n";
    cout << vec_2.front() <<endl;
    
    //return the last element of the vector
    cout << "\n back() returns the last element of vec_2:\n";
    cout << vec_2.back() <<endl;
    
    //return 1(true) if the vector is empty
    cout << "\n return 0 if vec_2 is not empty:\n ";
    cout << vec_2.empty() <<endl;
    
    vector<double> vec_3;
    cout << "\n return 1 if vec_3 is empty:\n";
    cout << vec_3.empty() <<endl;
    

    
    cout << "\n\n\n"<<endl;
    cout<< "-------------- vector iterators -----------"<<endl;
    
    // vector iterators:
    // vector iterators are used to point to the memory address of a vector element. In some ways, they ack like points in c++.
    
    // We can create vector iterators with the syntax
    //vector<Type>::iterator iteratorName;
    
    
    // declare iterator
    vector<double>::iterator iter_begin;
    vector<double>::iterator iter_end;
    vector<double>::iterator iter;

    
    // The begin() function returns an iterator that points to the first element of the vector.
    //iter_begin points to vec_1[0]
    iter_begin = vec_1.begin();
    cout<< "begin: "<< *iter_begin << endl;
    
    // The end() function points to the theoretical element that comes after the final element for the vector.
    //iter_end points to the last element of vec_1.
    //Here, due to the nature of the end() function, we have used the code vec_1.end()-1 to point to the last element of vec_1, i.e. vec_1[4]
    
    iter_end = vec_1.end()-1;
    cout<< "end: "<< *iter_end << endl;
    
    
    //initialize the iterator with the first element
    iter =  vec_1.begin();
    
    //print the vector element
    cout<< "vec_1[0]= " << *iter << endl;
    
    // iterator points to the 3rd element
    iter = vec_1.begin() + 2;
    cout<< "vec_1[2]= " << *iter << endl;
    
    // iterator points to the 3rd element
    iter = vec_1.end() - 1;
    cout<< "vec_1[4]= " << *iter << endl;
    
    
    
    // Iterate through vector using iterators
    
    //Use iterator with for loop
    for(iter = vec_1.begin(); iter != vec_1.end(); ++iter){
        cout << *iter << " ";
    }
    
    
   

    //As you see, vector combines the advantages of both the static and the dynamic array because it takes a non-const size parameter such as the dynamic one and automatically deletes the used memory like the static one.
    
    
    
    
    
    cout << "\n\n\n"<<endl;
    cout<< "----------------- matrix --------------"<<endl;
    
    
    // create a 3*3 zero matrix
    vector<double> vec_zero(3,0);
    matrix M_zero(3,vec_zero);
    
    
    cout<< "print 3*3 zero matrix:";
    print_array_matrix(M_zero,3);
    cout<< "\n"<<endl;
    
    // Addition element to a 2D vector
    
    vector<double> v_1(3);
    vector<double> v_2(3);
    vector<double> v_3(3);
    
    for(int i=0;i<3;i++){
        v_1[i] = i; //v_1=[0,1,2]
        v_2[i] = i+1; //v_2=[1,2,3]
        v_3[i] = i*2; // v_3=[0,2,4]
    }
    
    
  
    
    
    // Create an empty matrix
    matrix M;
    
    //Adding vectors to the empty 2D vector M.
    
    M.push_back(v_1);
    M.push_back(v_2);
    M.push_back(v_3);
   
    
    cout<< "Matrix M:"<<endl;
    print_array_matrix(M,3);
    
 //   for(int i=0;i<M.size();i++){
 //       for(int j=0;j<M[i].size();j++){
 //           cout<< M[i][j] << " ";
 //       }
 //       cout << endl;
 //   }
    
    cout<< "\n\n\n"<<endl;
    
    
    
    //Remove the last vector from a 2D vector
    M.pop_back();
   // print_array_matrix(M,2,3);
    cout<< "After removing the last vector, Matrix M:"<<endl;
    for(int i=0;i<M.size();i++){
        for(int j=0;j<M[i].size();j++){
            cout<< M[i][j] << " ";
        }
        cout << endl;
    }
    
    // Note that M[i] represents a one-dimensional vector. Therefore, if you need to add an elements in a certain vector inside the 2D vector, you can use M[i].push_back(value).
    
    
    
    //Iterator for the 2D vector
    matrix::iterator it;
    
    it = M.begin();
    
    
    cout<< "\n\n\n"<<endl;
    // Insterting the vector v_3 as the second vector
    M.insert(it+1, v_3);
    
    cout<< "Insterting the vector v_3 as the second vector, Matrix M:"<<endl;
    
    for(int i=0;i<M.size();i++){
        for(int j=0;j<M[i].size();j++){
            cout<< M[i][j] << " ";
        }
        cout << endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}



// Command you will use to compile:

// Convert the library into an object file.
// g++ -c my_library.cpp

// Compile the main to an executable
// g++ my_library.o main.cpp

// Run it
// ./a.out