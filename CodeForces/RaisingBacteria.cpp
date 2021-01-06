#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

string decimalToBinary(long long x){
    string binary = "";

    while (x > 0){
        if (x % 2 ==1)
            binary.push_back('1');
        else 
            binary.push_back('0');
        x /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;

}


int main(){

    long long x;
    cin >> x;
    string binary = decimalToBinary(x);

    int counter = 0;
    for (int i = 0 ; i < binary.length() ; ++i){
        if (binary.at(i) == '1'){
            counter++;
        }
    }
    
    cout << counter;
    
}