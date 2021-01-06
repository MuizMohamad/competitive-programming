#include <iostream>

int main(){

    int n;
    std::cin >> n;

    int ans = 0;
    for (int i = 0; i < n ; ++i){
        std::string comms;
        std::cin >> comms;
        if (comms == "++X" || comms == "X++"){
            ans++;
        }
        else{
            ans--;t
        }
    }
    std::cout << ans;
}