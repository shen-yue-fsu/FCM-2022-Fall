#include <iostream>
#include <fstream>


int main() {
    std::ofstream fout;
    fout.open("data.txt");
    int n=10;
    double norm_r[n];
    
    for(int i=0;i<n;i++){
        norm_r[i]=(n-i)*0.2;
        fout<< norm_r[i]<<"\n";
    }
    
    fout.close();
    
    return 0;
}
