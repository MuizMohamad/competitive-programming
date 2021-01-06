#include <iostream>

int main(){

    int num;
    std::string stones;
    std::cin >> num;
    std::cin >> stones;

    int counts = 0;    
    if (stones.length() > 1){
        for (int i = 1 ; i < stones.length() ; ++i){
            if (stones.at(i-1) == stones.at(i)){
                counts++;
            }
        }

        std::cout << counts;

    }
    else {
        std::cout << 0;
    }
    
}