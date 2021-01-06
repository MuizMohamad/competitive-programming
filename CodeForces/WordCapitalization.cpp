#include <iostream>
#include <algorithm>

int main(){
    
    std::string word;
    std::cin >> word;

    std::string capz;

    capz = std::toupper(word.at(0));
    

    if (word.length() > 1){
        for (int i = 1; i < word.length() ; ++i){
            capz += word.at(i);
        }
    }

    std::cout << capz;
    

}