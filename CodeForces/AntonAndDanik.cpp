#include <iostream>

int main(){

    int n ;
    std::cin >> n ;
    std::string win;
    std::cin >> win;
    int aCounter = 0;
    int dCounter = 0;

    for (int i = 0; i < n ; ++i){
        if (win.at(i) == 'A'){
            aCounter++;
        }
        else {
            dCounter++;
        }
    }

    if (aCounter > dCounter){
        std::cout << "Anton";
    }
    else if (aCounter < dCounter){
        std::cout << "Danik";
    }
    else {
        std::cout << "Friendship";
    }

}