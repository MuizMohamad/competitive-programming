#include <iostream>
#include <vector>

int main(){

    int n,k;

    std::cin >> n >> k;
    std::vector<int> scores;

    for (int i = 0 ; i < n ; ++i){
        int tmp;
        std::cin >> tmp;
        scores.push_back(tmp);
    }

    int advancer = k;
    int counter = k;
    
    if (scores.at(k-1) <= 0){
        advancer = 0;
        for (int i = k-2 ; i >= 0 ; --i){
            if (scores.at(i) > 0){
                advancer += 1;
            }
        }
    }
    else {
        if (k < n){
            for (int i = counter; i < n ; ++i){
                if (scores.at(i) >= scores.at(k-1)){
                    advancer += 1;
                }
            }
        }
        
        
    }
    std::cout << advancer;




}   