#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){
        long long a,b,c;
        cin >> a >> b >> c;
        double bc = c/(b*(1.0));
        if (a >= bc){
            if (c > a){
                cout << 1 << " ";
            }
            else {
                cout << -1 << " ";
            }      
        }
        else {
            cout << b << " ";
        }

        if (bc >= a){
            cout << -1 << "\n";
        }
        else {
            cout << b << "\n";
        }
    }
}