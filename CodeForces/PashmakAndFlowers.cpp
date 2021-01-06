#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> f;
    long long maxF = 0;
    long long minF = INT_MAX;
    for (long long i = 0 ; i < n ; ++i){
        long long tmp;
        cin >> tmp;
        maxF = max(maxF,tmp);
        minF = min(minF,tmp);
        f.push_back(tmp);
    }

    sort(f.begin(),f.end());
    long long dif = maxF- minF;

    if (n == 2){
        cout << dif << " " << 1;
    }
    else if (minF == maxF){
        long long ans = n*(n+1)/2 - n;
        cout << 0 << " " << ans; 
    }
    else{
        long long countMax = 0;
        long long countMin = 0;
        long long left = 0;
        long long right = n-1;

        while(f[right] == maxF ){
            right--;
            countMax++;
        }
        while(f[left] == minF ){
            left++;
            countMin++;
        }

        long long ans = countMin * countMax;
        cout << dif << " " << ans;

    }
    




}