#include <iostream>
#include <vector>

using namespace std;
const int MOD = 1e9 + 7;
int main(){
    vector<vector<long long>> dp(1001,vector<long long>(1001,0));

    
    int n;
    cin >> n;
    
    vector<string> traps;
    for (int i = 0 ; i < n ; ++i){
        string tmp;
        cin >> tmp;
        traps.push_back(tmp);
    }

   for (int i = 1 ; i <= n ; ++i){
        for (int j = 1; j <= n ; ++j){
            if (traps[i-1][j-1] == '*'){
                dp[i][j] = 0;
            }
            else if (i == 1 || j == 1){
                if (i == 1 && j == 1){
                    dp[1][1] = 1;
                }
                else if (i == 1){
                    dp[1][j] = dp[1][j-1] % MOD;
                }
                else {
                    dp[i][1] = dp[i-1][j] % MOD;
                }

            }
            else {
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
            }
        }
    }
    
    cout << dp[n][n];
}