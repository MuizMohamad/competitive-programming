#include <iostream>
#include <vector>

int main(){

    int t;
    std::cin >> t;
    std::vector<int> ns;

    for (int i = 0; i < t ; ++i){
        int n;
        std::cin >> n;
        ns.push_back(n);
    }
    
    for (auto x : ns){
        std::cout << x << std::endl;
    }
}