#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int coinNum;
    std::cin >> coinNum;
    std::vector<int> coins;

    for (int i = 0 ; i < coinNum ; ++i){
        int tmp;
        std::cin >> tmp;
        coins.push_back(tmp);

    }

    std::sort(coins.begin(),coins.end());
    std::reverse(coins.begin(),coins.end());

    int sumCoins = 0;
    int sumTwinCoins = 0;
    int counter = 1;
    

    while (sumCoins <= sumTwinCoins ){
        for (int i = 0;i < counter ;++i){
            sumCoins += coins.at(i);
        }
        for (int j = counter ; j < coins.size() ; ++j ){
            sumTwinCoins += coins.at(j);
        }
        if (sumCoins <= sumTwinCoins){
            counter++;
            sumCoins = 0 ;
            sumTwinCoins = 0;
        }
    }

    std::cout << counter;
}