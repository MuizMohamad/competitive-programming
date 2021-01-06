#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
const int MOD = 1e9 + 7;

int recursiveTest(int left,int right,vector<int> arr,int m){
    int ans;
    if (arr[left] == -1){
        return 1;
    }
    if (abs(arr[left] - arr[right]) == 2){
        return (1 * recursiveTest(left-1,right-1,arr,m)) ;//% MOD;
    }
    if (arr[left+1] == 0){
        
        if (arr[left] == 1 || arr[left] == m || arr[right] == 1 || arr[right] == m )
            return (2 * recursiveTest(left-1,right-1,arr,m)) ;//% MOD;
        else
            return (3 * recursiveTest(left-1,right-1,arr,m)) ;//% MOD;
    }
    else {
        return (1 * recursiveTest(left-1,right-1,arr,m)) ;//% MOD;
    }

}

int main(){

    int n,m;

    cin >> n >> m;
    vector<int> arr;
    for (int i = 0 ; i < n ; ++i){
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    //int ans = recursiveTest(n-3,n-1,arr,m);
    vector<vector<int>> dp(n+1,vector<int>(101,0));
    //int dp[n+1][101];
    //for (int i = 0 ; i <= n ; ++i){
    //   for (int j = 0 ; j <= m ; ++j){
    //        dp[i][j] = 0;
    //    }
    //}
  
    if (arr[0] == 0){
        for (int i = 1 ; i <= m ; ++i){
            dp[1][i] = 1;
        }
    }
    else {
        dp[1][arr[0]] = 1;
    }
    
   
    for (int i = 2; i <= n ; ++i){
        
        if (arr[i-1] != 0 && arr[i-1] >= 1 && arr[i-1] <= m){
            int cur = arr[i-1];
            dp[i][cur] = dp[i-1][cur];
            if (cur-1 >= 1)
                dp[i][cur] = (dp[i][cur] + dp[i-1][cur-1]) % MOD ;
            if (cur+1 <= m)
                dp[i][cur] = (dp[i][cur] + dp[i-1][cur+1]) % MOD ;
        }
        else {
            for (int j = 1 ; j <= m ; ++j){
                
                dp[i][j] = dp[i-1][j];
                if (j-1 >= 1)
                    dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % MOD;
                if (j+1 <= m)
                    dp[i][j] = (dp[i][j] + dp[i-1][j+1]) % MOD;

            }
        }
    }

    long long ans = 0;
    
    for (int i = 1 ; i <= 100 ; ++i){
        
        ans = (ans + dp[n][i]) % MOD;
    }
    cout << ans;
    
    

    
   

}