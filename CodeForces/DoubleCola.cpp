#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int y;
    cin >> y;
    int x = y-1;
    int N = log((x+5)/5) / log(2);
    int NthStart = 5*pow(2,N)  - 5*pow(2,N-1);
    int NthEnd = 5*pow(2,N);
    int extra = x - 5*(pow(2,N)- 1);
    if (N == 0){
        NthStart = 0;
        extra = x;
    }

    int each = NthEnd/5;
    //cout << N << " " << NthStart << " " << NthEnd << " " << extra <<  " " << each << endl;
    if (extra / each == 0 ){
        cout << "Sheldon";
    }
    else if (extra / each == 1){
        cout << "Leonard";
    }
    else if (extra / each == 2){
        cout << "Penny";
    }
    else if (extra / each == 3){
        cout << "Rajesh";
    }
    else if (extra / each == 4){
        cout << "Howard";
    }
    
}