#include <iostream>
#include <cmath>

using namespace std;

int main(){

    string num = "";
    int n,t;
    cin >> n >> t;
    
    if (t == 10){
        if (n == 1){
            cout << -1;
        }
        else {
            for (int i = 1 ; i < n ; ++i){
                if (i == 1)
                    num = num + "0";
                num = "1" + num;
            }
            cout << num;
        }
    }
    else {
        char ts = (char) t;
        for (int i = 0 ; i < n ; ++i){
                num += to_string(ts);
        }
        cout << num;
    }

    
    
    
}