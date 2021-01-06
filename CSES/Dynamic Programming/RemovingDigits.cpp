#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    cout << "ayam";
    vector<int> dp(1000001,1e9);
    //int dp[1000001];
    dp[0] = 0;
    for (int i = 1 ; i <= n ; ++i){
        int copyi = i;
     
        while (copyi > 0){
            int digit = copyi % 10;
            dp[i] = min(dp[i-digit]+1,dp[i]);
            copyi /= 10;
        }
    }
    cout << dp[n];
}

//const int maxN = 1e6+1;
/* Greedy Approach
int recursionGreedy(int n){
    if (n == 0){
        return 0;
    }
    int copyN = n;
    int maxDigit = 0;
    while (copyN > 0){
        int digit = copyN % 10;
        maxDigit = max(maxDigit,digit);
        copyN /= 10;
    }

    return 1 + recursionBF(n-maxDigit);
}
*/