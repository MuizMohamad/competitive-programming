#include <iostream>
#include <vector>

int main(){

    int t;
    std::cin >> t;
   
    std::vector<int> result;

    for ( int i = 0 ; i < t ; ++i ){
        int s;
        std::cin >> s;
        int counter = 0;
        while(s > 0){
            if (s >= 10){
                int larS = s - (s % 10);
                s = s - larS + (larS/10);
                counter += larS;
            }
            else{
                counter += s;
                s = 0;
            }
        }
        result.push_back(counter);
    }

    for (auto x : result){
        std::cout << x << std::endl;
    }
}