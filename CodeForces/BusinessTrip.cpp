#include <vector>
#include <iostream>
#include <algorithm>

int main(){
    int k;
    std::cin >> k;
    std::vector<int> cm;

    for (int i = 0 ; i < 12 ; ++i){
        int tmp;
        std::cin >> tmp;

        cm.push_back(tmp);
    }

    std::sort(cm.begin(),cm.end(),[](int x,int y){return x > y;});

    int sum = 0;
    bool enough = false;
    if (k == 0){
        std::cout << 0;
    }
    else {
        for (int i = 0 ; i < 12 ;++i){
            sum += cm.at(i);
            if (sum >= k){
                std::cout << i+1;
                enough = true;
                break;

            }
            
        }

        if (!enough){
            std::cout << -1;
        }
    }

}