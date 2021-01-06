#include <iostream>
#include <string>

using namespace std;

int dp[5001][5001];
string a,b;

int main(){
    cin >> a;
    cin >> b;
    int m = a.size();
    int n = b.size();
    dp[0][0] = 0;
    for (int i = 1; i <= m ; ++i){
        dp[i][0] = i;
    
    }
    for (int j = 1 ; j <= n ; ++j){
        dp[0][j] = j;
    }

    for(int i = 1 ; i <= m ;++i){

        for (int j = 1 ; j <= n ; ++j){

            int rep = dp[i-1][j-1];
            int ins = dp[i][j-1];
            int del = dp[i-1][j];
            int ans = min(rep,min(ins,del));

            if (a[i-1] != b[j-1]){
                dp[i][j] = 1 + ans;
            }
            else {
                dp[i][j] = rep;
            }

        }

    }
   
    cout << dp[m][n];

    
    
}