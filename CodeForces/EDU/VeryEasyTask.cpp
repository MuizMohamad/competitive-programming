#include <iostream>

using namespace std;

long long n,a,b;

bool good(long long sec){
    sec -= min(a,b);
    long long s = 1;
    s += sec/a;
    s += sec/b;
    return (s >= n && sec >= 0);
}

int main(){
    
    cin >> n >> a >> b;
    
    long long left = 1; // maintain left bad
    long long right = max(a,b)*n; // maintain right good

    while(right > left + 1){
        long long mid = left + (right-left)/2;
        if (good(mid)) right = mid;
        else left = mid;
    }

    cout << right << "\n";
    
}