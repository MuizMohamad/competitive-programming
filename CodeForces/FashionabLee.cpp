#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> results;
    for (int i = 0 ; i < t ; ++i){
        int n;
        cin >> n;
        if (n % 4 == 0){
            results.push_back(1);
        }
        else {
            results.push_back(0);
        }
        /*
        int centralAngle = 360/n;
        int interAngle = (n-2)*180/n;
        bool beautiful = false;
        for (int j = 0 ; j < n/2 ; ++j){
            if (interAngle + centralAngle*j + 90 == 360 || interAngle + centralAngle*j + 90 == 180 ){
                beautiful = true;
                break;
            }
        }

        if (beautiful){
            results.push_back(1);
        }
        else {
            results.push_back(0);
        }
        */

    }

    for (auto x : results){
        if (x == 1){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}