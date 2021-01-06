#include <iostream>

int main(){
    
    int a,b;
    std::cin >> a >> b;
    int year = 0;

    while (a <= b){
        a *= 3;
        b *= 2;
        year += 1;
    }

    std::cout << year;
}