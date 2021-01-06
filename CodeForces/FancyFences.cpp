#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--){

        int angle;
        cin >> angle;

        if (angle < 60){
            cout << "NO" << '\n';
        }
        else {
            int test = 360/(180-angle);
            if ((test-2)*180/test == angle){
                cout << "YES" << '\n';
            }
            else {
                cout << "NO" << "\n";
            }

        }
    }
}