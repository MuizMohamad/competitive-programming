#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int num;
    std::cin >> num;
    std::vector<int> columns;

    for (int i = 0 ; i < num ; ++i){
        int tmp;
        std::cin >> tmp;
        columns.push_back(tmp);

    }

    std::sort(columns.begin(),columns.end());

    for (auto x : columns){
        std::cout << x << " ";
    }
    

}