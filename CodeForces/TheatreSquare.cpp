#include <iostream>
#include <cmath>

int main(){

    long long n,m,a;

    std::cin >> n >> m >> a;
    double aD = (double) a;
    long long celM = ceil(m/aD);
    long long celN = ceil(n/aD);
    std::cout << celN*celM;
    
}