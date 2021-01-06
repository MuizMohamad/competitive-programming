#include <iostream>

using namespace std;

int main(){

    int n,x;
    cin >> n >> x;
    int counter = 0;
    for (int i = 1 ; i <= n ; ++i){
        int k = x/i;
        if (k <= n && k*i == x){
            counter++;
        }
    }
    cout << counter;
}