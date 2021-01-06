#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


//int dp[101][1000001];
const int MOD = 1e9+7;
//vector<vector<int>> dp(1000001,vector<int>(101,-1));
/*
int recursiveBF(int n,int maxIndex,vector<int> coins){
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    if (dp[maxIndex][n] != -1){
        return dp[maxIndex][n];
    }
   
    long long ans = 0;
    for (int i = 1 ; i <= maxIndex ; ++i){
        int x = coins[i-1];
        if (x < coins[maxIndex-1])
            ans = (ans + recursiveBF(n-x,i,coins)) % MOD ;
        else if (x == coins[maxIndex-1]){
            int multi = n/x;
            ans = ans + recursiveBF(n-(x*multi),i-1,coins) ;
        }
    }
    
    dp[maxIndex][n] = ans;
    return ans;
}
*/
int main(){
    int n,x;
    cin >> n >> x;
    vector<int> coins;

    for (int i = 0 ; i < n ; ++i){
        int tmp;
        cin >> tmp;
        coins.push_back(tmp);
    }


    int dp[n+1][x+1];
    for (int i = 0 ; i <= n ; ++i){
        for (int j = 0 ; j <= x ; ++j){
           dp[i][j] = 0;
        }  
    }
    dp[0][0] = 1;
   for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= x; j++) {
            dp[i][j] = dp[i-1][j];
            int left = j-coins[i-1];
            if (left >= 0) {
                dp[i][j] =( dp[i][j] + dp[i][left]) % MOD;
            }
        }
  }
  cout << dp[n][x] << endl;


}