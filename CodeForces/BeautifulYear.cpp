#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int year;
    std::cin >> year;

    bool distinct = false;
    std::vector<int> digits;
    while (!distinct){
        year++;
        int n = year;
        while (n > 0){
            int digit = n % 10;
            if ( std::find(digits.begin() , digits.end() , digit) == digits.end()){
                digits.push_back(digit);
            }
            //std::cout << n << " " << digit << std::endl;
            n /= 10;
        }
        
        if (digits.size() == 4){
            distinct = true;
        }
        else {
            
            digits.clear();
            
        }
        
    }

    std::cout << year;
}