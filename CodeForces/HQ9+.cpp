#include <iostream>

int main(){

    std::string lang;
    std::cin >> lang;

    bool output = false;
    for (int i = 0; i < lang.size() ; ++i){
        char c = lang.at(i);
        if (c == 'H' || c == 'Q' || c == '9'){
            output = true;
        }
    }

    if (output){
        std::cout << "YES" ;
    }
    else {
        std::cout << "NO";
    }
}