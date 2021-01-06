#include <iostream>

int main(){

    int n;
    int rCounter = 0;
    std::cin >> n;

    for (int i = 0 ; i < n ; ++i){
        int p , q;
        std::cin >> p >> q;
        if (q-p >= 2){
            rCounter++;
        }

    }

    std::cout << rCounter;
}