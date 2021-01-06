#include <iostream>
#include <algorithm>
#include <string>

int main(){
    std::string first;
    std::string second;

    std::cin >> first ;
    std::cin >> second;

    std::for_each(first.begin(), first.end(), [](char & c){
    c = ::tolower(c);
    });

    std::for_each(second.begin(), second.end(), [](char & c){
    c = ::tolower(c);});

    if ( first > second ){
        std::cout << 1;
    }
    else if (first == second){
        std::cout << 0;
    }
    else {
        std::cout << -1;
    }
}