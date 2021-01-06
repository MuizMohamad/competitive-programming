#include <iostream>
#include <vector>

int main(){

    int n;
    std::cin >> n;
    
    int probAt = 0;

    for (int i = 0 ; i < n ; ++i){
        int h,j,k;
        std::cin >> h >> j >> k;
        if (h + j + k >= 2){
            probAt += 1;
        }

    }

    std::cout << probAt;

}
