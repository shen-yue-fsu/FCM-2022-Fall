#include <iostream>
#include<random>

int main(){
    
    double a = -1.0;
    double b = 1.0;
        
    std:: default_random_engine generator(time(0));
    std:: uniform_real_distribution <double> distribution(a,b);
    
    // generate a random number x between a and b
    double x;
    x = distribution(generator);
    std::cout << "x=" << x <<std::endl;
    
    
    // generate a set of numbers {y_i} between a and b
    double y[5];
    for(int i=0;i<5;i++){
        y[i] =distribution(generator);
        std::cout << y[i] <<std::endl;
    }
    
    
    return 0;
}
