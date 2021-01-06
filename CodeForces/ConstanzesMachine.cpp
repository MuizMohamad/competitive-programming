#include <iostream>
#include <string>

using namespace std;
const int MOD = 1000000007;
int main(){

    string s;
    cin >> s;
    int n = s.size();
    long long  dp[100001];
    dp[0] = dp[1] = 1;
    bool can = true;
    for (auto x : s){
        if (x == 'm' || x == 'w'){
            can = false;
        }
    }
    for (int i = 2 ; i <= n ; ++i){
        
        if (s[i-2] == s[i-1] && (s[i-1] == 'n' || s[i-1] == 'u')){
            dp[i] = (dp[i-1] + dp[i-2]) % MOD;
        }
        else {
            dp[i] = dp[i-1];
        }
    }
    if(can){
        cout << dp[n];
    }
    else{
        cout << 0;
    }
    
}