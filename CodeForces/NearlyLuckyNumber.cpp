#include <iostream>

int main(){

    long long n;
    std::cin >> n;
    int lCounter = 0;

    while (n >= 10){

        if((n % 10 == 7) || (n % 10 == 4)){
            lCounter++;
        }
        n /= 10;
       
    }
     
     if (n < 10){
        if (n == 7 || n ==4){
            lCounter++;
        }
    }

    if (lCounter == 4 || lCounter == 7){
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    
}