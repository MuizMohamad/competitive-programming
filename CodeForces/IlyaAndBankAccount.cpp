#include <iostream>
#include <algorithm>

int main(){

    int n;
    std::cin >> n;
 
    if (n >= 0 ){
        std::cout << n;
    }
    else {
        int lastD = n / 10;
        int secD = (n/100)*10 + n%10;
        
        std::cout << std::max(lastD, secD);
    }
}