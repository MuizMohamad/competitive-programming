#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    std::string names;
    std::cin >> names;

    std::vector<int> letter;
    int counts;

    for (int i = 0 ; i < names.length() ; ++i){
        if (std::find(letter.begin(),letter.end(), names.at(i) ) == letter.end()){
            letter.push_back(names.at(i));
            counts++;
        }
    }

    if (counts % 2 == 0){
        std::cout << "CHAT WITH HER!";
    }
    else {
        std::cout << "IGNORE HIM!";
    }

}