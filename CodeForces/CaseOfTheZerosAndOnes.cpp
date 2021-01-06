#include <iostream>
#include <algorithm>
#include <string>

int main(){

    int n;
    std::string str;

    std::cin >> n;
    std::cin >> str;
    int i = 0;

    if (str.length() == 1){
        std::cout << 1;
    }
    else {
        int oneCounter = 0;
        int zeroCounter = 0;
        for (int i = 0 ; i < n ; ++i){
            if (str.at(i) == '1'){
                oneCounter++;
            }
            else {
                zeroCounter++;     
            }
        }

        int length = abs(oneCounter - zeroCounter);

        std::cout << length;
    }
    

}