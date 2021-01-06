#include <iostream>
#include <vector>

int main(){

    int n;
    int c , oldDigit , curDigit;
    int counter = 1;
    std::cin >> n;
    std::cin >> c;
    int max = 1;
    oldDigit = c;
    for (int i = 1 ; i < n ; ++i){
        std::cin >> curDigit;
        if (oldDigit <= curDigit){
            counter += 1;
        }
        else {
            counter = 1;
        }

        if (max < counter){
            max = counter;
        }

        oldDigit = curDigit;

    }

    std::cout << max;
}