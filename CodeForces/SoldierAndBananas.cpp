#include <iostream>

int main(){

    int k,n,w;
    std::cin >> k >> n >> w;;

    int totalcost = 0;
    for (int i = 1 ; i <= w ; ++i){
        totalcost += i*k;
    }

    if (n >= totalcost){
        std::cout << 0;
    }
    else {

        std::cout << totalcost - n ;
    }

}