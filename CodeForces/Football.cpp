#include <iostream>

int main(){

    std::string n;
    std::cin >> n;
    char oldDigit = n.at(0);
    int counter = 1;
    bool dangerous = false;
    
    for(int i = 1 ; i < n.length(); ++i){
        char curDigit = n.at(i);
        if (oldDigit == curDigit){
            counter++;
        }
        else {
            counter = 1;
        }
        if (counter >= 7){
            dangerous = true;
        }
        oldDigit = curDigit;
        
    }

    if (dangerous){
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    

}