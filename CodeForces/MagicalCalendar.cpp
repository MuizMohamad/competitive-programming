#include <iostream>

using namespace std;

int main(){

    long long t;
    cin >> t;
    while (t--){
        long long r,n;
        cin >> n >> r;
        long long sum;
        if (r >= n ){
            sum = (n-1)*n/2 + 1;
        }
        else{
            sum = (r)*(r+1)/2;
        }
        
        
        cout << sum << "\n";
    }
}