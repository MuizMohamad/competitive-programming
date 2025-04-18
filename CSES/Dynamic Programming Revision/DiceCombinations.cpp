#include <iostream>

using namespace std;
const int MOD = 1e9 + 7;

// recurrence relation
// f(0) = 1
// f(x) = sum of (x-j), where j is each dice from 1 to 6 where applicable (if j<=x);

void bottom_up(int n){

    int dp[n+1];
    dp[0] = 1;

    for (int i = 1;i <= n; i++){
        int all = 0;
        for (int dice=1;dice<=6 && dice <= i ; dice++){
            // all += dp[i-dice] % MOD doesnt work
            all = (all + dp[i-dice]) % MOD;
        }
        dp[i] = all % MOD;
    }
    cout << dp[n];
}

int dp_memo[10000001];

int top_down(int n){
    
    if (n == 0){
        return 1;
    }

    if (dp_memo[n] != -1){
        return dp_memo[n];
    }

    int all = 0;
    for (int dice=1;dice<=6 && dice <= n ; dice++){
        // all += dp[i-dice] % MOD doesnt work
        all = (all + top_down(n-dice)) % MOD;
    }
    dp_memo[n] = all % MOD;

    return all;
}

int main(){

    int n;
    cin >> n;
    
    // bottom_up(n);

    for (int i = 0; i <= 10000001; i++){
        dp_memo[i] = -1;
    }

    cout << top_down(n);

}