#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> coins;
    int copyN = n;
    while (n--){
        int tmp;
        cin >> tmp;
        coins.push_back(tmp);
    }

    long long dp[x+1];
    dp[0] = 0;
    for (int i  = 1 ; i <= x;++i){
        dp[i] = 1e9;
    }
    
    for (int i = 1; i <= x ; ++i){

        for (auto y : coins){
            if (i - y >= 0)
                dp[i] = min(dp[i-y] + 1,dp[i]);
        }
        
    }

    if (dp[x] >= 1e9){
        cout << -1 ;
    }
    else{
       cout << dp[x]; 
    }
}