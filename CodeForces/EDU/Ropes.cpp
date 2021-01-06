#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
int n,k;
vector<int> ropes;


bool good(double x){
    int s = 0;
    for (auto y : ropes){
        s += y/x;
    }
    return s >= k;
}

int main(){
    cin >> n >> k;

    for(int i = 0; i < n ;++i){
        int tmp;
        cin >> tmp;
        ropes.push_back(tmp);
    }

    double left = 0; // maintain left is good
    double right = 1e8; // maintain right is bad

    for(int i = 0 ; i < 100 ; i++){
        double mid = left + (right-left)/2;
        if (good(mid)) left = mid;
        else right = mid;
    }
    cout << setprecision(20);
    cout << left << "\n";


}