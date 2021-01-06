#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int n,m;
    std::cin >> n >> m;
    std::vector<int> puzzles;
    std::vector<int> min;

    for (int i = 0 ; i < m ; ++i){
        int tmp;
        std::cin >> tmp;
        puzzles.push_back(tmp);
    }

    std::sort(puzzles.begin(),puzzles.end());

    for (int i = 0 ; i < (m-n+1); ++i){
        min.push_back(puzzles.at(i+n-1) - puzzles.at(i));
    }   

    int realMin = *std::min_element(min.begin(),min.end());
    std::cout << realMin;
    
}