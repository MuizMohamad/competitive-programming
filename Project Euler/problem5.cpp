#include <iostream>
#include <algorithm>
using namespace std;


bool checkMult(int x){
    
    for (int i = 1 ; i <= 20 ; i++){
        if (x % i != 0) return false;
    }

    return true;
}

int main(){

    int test = 2520;

    while (!checkMult(test)){
        test++;
    }

    cout << test;
}