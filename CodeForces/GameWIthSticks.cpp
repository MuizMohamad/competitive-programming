#include <iostream>

int main(){

    int n,m;
    std::cin >> n >> m;
    std::string turn = "Akshat";

    while ( n != 0 && m != 0 ) {
        
        if (turn == "Akshat"){
            n = n - 1;
            m = m - 1;
            turn = "Malkiva";
        }

        else {
            n = n - 1;
            m = m - 1;
            turn = "Akshat";
        }

    }

    if (turn == "Akshat"){
        std::cout << "Malvika";
    }
    else {
        std::cout << "Akshat";
    }
    


}