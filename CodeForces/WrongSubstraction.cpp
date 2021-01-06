#include <iostream>

int main(){
    int num, k;

    std::cin >> num >> k;
    while (k > 0){
        if (num % 10 == 0){
            num /= 10;
        }
        else {
            num -= 1;
        }
        k--;
    }

    std::cout << num;
}