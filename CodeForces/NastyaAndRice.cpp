#include <iostream>
#include <vector>

int main(){

    int t;
    std::cin >> t;
    std::vector<int> results;

    for (int i = 0 ; i < t ; ++i){  

        int n,a,b,c,d;

        std::cin >> n >> a >> b >> c >> d;

        int aMb = n*(a-b);
        int aPb = n*(a+b);
        int cMd = c-d;
        int cPd = c+d;
        bool cons = true;

        if (aMb - cPd > 0 || cMd - aPb > 0){
            cons = false;
        }

        if (cons){
            results.push_back(1);
        }
        else {
            results.push_back(0);
        }
    }

    for (auto x : results){
        if (x == 1){
            std::cout << "Yes" << std::endl;
        }
        else {
            std::cout << "No" << std::endl ;
        }
    }
}