#include <iostream>
#include <algorithm>

int main(){

    std::string word;

    std::cin >> word;

    int LCounter = 0;
    int UCounter = 0;

    for (int i = 0 ; i < word.length() ; ++i){
        if ( isupper(word.at(i))){
            UCounter += 1;
        }
        else {
            LCounter += 1;
        }
    }

    if (UCounter > LCounter){
        std::transform(word.begin(), word.end(),word.begin(), ::toupper);
        std::cout << word;
    }
    else {
        std::transform(word.begin(), word.end(),word.begin(), ::tolower);
        std::cout << word;
    }
}