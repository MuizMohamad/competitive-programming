#include <iostream>
using namespace std;

int main(){

    int sum100 = 100*(100+1)/2;
    sum100 *= sum100;
    int sum100sq = 0;

    for (int i = 1 ; i <= 100 ; i++){
        sum100sq += i*i;
    }

    cout << sum100 - sum100sq ;
}