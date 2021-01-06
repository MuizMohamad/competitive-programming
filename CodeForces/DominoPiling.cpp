#include <iostream>

int main (){

    int m,n;
    std::cin >> m >> n;
    if (m % 2 == 0){
        std::cout << n*(m/2);
    }
    else if ( n % 2 == 0)
    {
        std::cout << m*(n/2);
    }
    else if (m % 2 == 1 ){
        std::cout << (n*(m/2) +(n/2));
    }
    else {
        std::cout << (m*(n/2) +(m/2));
    }

    
    
}