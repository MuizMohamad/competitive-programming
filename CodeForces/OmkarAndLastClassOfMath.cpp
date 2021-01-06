#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool prime(int n){
    bool test = true;
    if (n % 2 == 0 && n != 2){
        test = false;

    }

    for (int i = 3 ; i < sqrt(n) ; i+= 2 ){
        if (n % i == 0 && n != i){
            test = false;
        }
    }

    return test;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int small = 0;
       
        for (int i = 2; i <= sqrt(n) ; ++i){
            if (prime(i) == true){
                if (n % i == 0){
                    small = i;
                    break;
                }
            }
        }
        
        if (small == 0){
            cout << 1 << " " << n-1 << "\n";
        }
        else {
           
            int big = n/small;
            cout << big << " " << n-big << "\n";
        }
    }
}