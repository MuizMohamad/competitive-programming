#include <iostream>
#include <algorithm>

int main(){

    std::string first;
    std::string second;

    std::cin >> first;
    std::cin >> second;
    std::reverse(second.begin() , second.end() );
    if ( second == first ){
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
}