#include <iostream>

int main(){

    int n, k;
    std::string line;
    std::string newLine;

    std::cin >> n >> k;
    std::cin >> line;
    newLine = line;
    while ( k > 0 ){
        for (int i = 0; i < n-1  ; ++i){
            char tmp1 = line.at(i);
            char tmp2 = line.at(i+1);
            if (tmp1 == 'B' && tmp2 == 'G'){
                newLine.at(i) = 'G';
                
                newLine.at(i+1) = 'B';
            }
        }
        line = newLine;
        k--;
    }

    std::cout << newLine;
}