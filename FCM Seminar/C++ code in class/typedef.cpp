#include <iostream>
#include <random>
#include <iomanip>
using namespace std;


//Suppose you have a large numerical experiment, where all your code used floating point of type double.
//You are curious about how the results will be affected by changing the floating point type to single precision float type.
//One solution: use the typedef statement to define types:



//typedef:  creates an alias that can be used anywhere in place of a (possibly complex) type name.


//typedef double float_type;
typedef float float_type;


int main() {
    float_type a = 3.912348239293;
    
    // Setting the precision to 12 decimal places
        cout << setprecision(13);
    
        cout<< "a=" << a <<endl;

    return 0;
}




//   float has a precision of up to only 7 digits, it shows garbage values after its precision is exceeded.
   
//   double variable shows the correct number because it has a precision of 15 digits, while the number itself consists of 13 digits.

