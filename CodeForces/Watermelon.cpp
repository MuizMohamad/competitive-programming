#include <iostream>

int main(){
    bool test = false;
    int input;
    std::cin >> input;
    for (int i = 1 ; i <= input/2 ; i++){
        int j = input - i;
        if (i % 2 == 0 && j % 2 == 0){
            test = true;
        }
    }
    
    if ( test == true){
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

}