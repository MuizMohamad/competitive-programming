#include <iostream>
#include <vector>

using namespace std;
long long n,k;
vector<long long> groups;

bool good(long long x){
    long long slots = x*k;
    for (auto y : groups){
        slots -= min(x,y);
    }
    return slots <= 0;
}

int main(){
    cin >> k;
    cin >> n;

    for(long long i = 0; i < n ; ++i){
        long long tmp;
        cin >> tmp;
        groups.push_back(tmp);
    }

    long long left = 1; // maintain left is good
    long long right = 1000000000000;

    while (left + 1LL < right){
        long long mid = left + (right-left)/2;
        if (good(mid)) left = mid;
        else right = mid;
    }

    cout << left;

}