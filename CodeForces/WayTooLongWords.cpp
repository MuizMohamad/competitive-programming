#include <iostream>

int main(){

    int n;
    std::cin >> n;
    std::string word;
    for (int i = 0 ; i < n ; ++i){
        
        std::cin >> word;
        if (word.length() > 10){
            std::string newW = word.at(0) + std::to_string(word.length() - 2) +  word.at(word.length()-1) ;
            std::cout << newW << std::endl;
        }
        else {
            std::cout << word << std::endl;
        }

    } 
}