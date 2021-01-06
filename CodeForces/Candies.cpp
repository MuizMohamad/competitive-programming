#include <iostream>
#include <vector>
#include <cmath>

int main(){

    int t;
    std::cin >> t;
    std::vector<int> ns;

    for (int i = 0 ; i < t ; ++i){
        int n;
        std::cin >> n;
        ns.push_back(n);
       
    }

    for (int j = 0; j < t ; ++j){
        int test = ns.at(j);
        
        bool found = false;
        int k = 2; 
        while (!found){
            if (test % (int) (pow(2,k) - 1) == 0){
                int x = test/(pow(2,k)-1);
                std::cout <<  x << std::endl;
                found = true;
            }
            else {
                k++;
            }
        }
        
    }
}