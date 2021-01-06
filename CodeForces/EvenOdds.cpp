#include <iostream>
#include <vector>

int main(){

    long long n,k;
    std::cin >> n >> k;
    
    long long counter = 0;
    
    
    if (n % 2 ==0){
        if (k >= (n/2 + 1)){
            k = k - (n/2);
            std::cout << 2*(k-1) + 2;
        }
        else {
            std::cout << 2*(k-1) + 1;
        }

    }
    else {
        if (k >= (n/2 + 2)){
            k = k - (n/2 + 1);
            std::cout << 2*(k-1) + 2;
        }
        else{
            std::cout << 2*(k-1) + 1;
        }

    }
    

}