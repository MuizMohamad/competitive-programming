#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(){

    std::string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";


    char shift;
    std::string str;
    std::cin >> shift;
    std::cin >> str;
    std::string decStr;

    if (shift == 'R'){
        for (int i = 0 ; i < str.length() ; ++i){
            decStr += *(find(keyboard.begin(),keyboard.end(), str.at(i)) - 1);
        }
        std::cout << decStr;
    }
    else {
        for (int i = 0 ; i < str.length() ; ++i){
            decStr += *(find(keyboard.begin(),keyboard.end(), str.at(i)) + 1);
        }
        std::cout << decStr;
    }

}