#include <iostream>

int main(){

    int n,m;

    std::cin >> n >> m;

    int socksCounter = n;
    int day = 0;

    while (socksCounter > 0){
        socksCounter--;
        day++;
        if ( day % m == 0 ){
            socksCounter += 1;
        }
    }

    std::cout << day;
}