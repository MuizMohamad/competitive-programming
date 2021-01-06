#include <iostream>
#include <vector>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    int n,x;
    cin >> n >> x;
    int copyN = n;
    vector<int> coins;

    while(copyN--){
        int tmp;
        cin >> tmp;
        coins.push_back(tmp);
    }

    vector<int> dp(x+1,0);
    dp[0] = 1;
    for (int i = 1; i <= x ; ++i){

        dp[i] = 0;
        for (int j = 0 ; j < n ; ++j){
            int y = coins[j];
            if (i-y >= 0)
                dp[i] = (dp[i] + dp[i-y]) % MOD;
        }
    }

    cout << dp[x];
}