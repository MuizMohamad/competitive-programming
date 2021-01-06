#include <iostream>
#include <vector>

using namespace std;
int choose(vector<int> line1, vector<int> line2, int n,int turn){
    int ans;
    if (n == 0){
            return 0;
    }
    if (turn == 1){
        
        
        ans = max(line1[n-1] + choose(line1,line2,n-1,2),choose(line1,line2,n-1,1));
        
        
    }
    else {
       
        int tmp = line2[n-1] + choose(line1,line2,n-1,1);
        int tmp2 = choose(line1,line2,n-1,2);
        ans = max(tmp,tmp2);
    }

    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> line1;
    vector<int> line2;
    for (int i = 0 ; i < n ; ++i){
        int tmp;
        cin >> tmp;
        line1.push_back(tmp);
    }
    for (int i = 0 ; i < n ; ++i){
        int tmp;
        cin >> tmp;
        line2.push_back(tmp);
    }
    long long dp[n+1][2];

    dp[1][1] = line1[0];
    dp[1][2] = line2[0];
    cout << endl;
    cout << dp[1][1] << " " << dp[1][2] << endl;
    for (int i = 2 ; i <= n ; i++){
        dp[i][1] = max(line1[i-1] + dp[i-1][2] , dp[i-1][1]);
        dp[i][2] = max(line2[i-1] + dp[i-1][1] , dp[i-1][2]);
        cout << dp[i][1] << " " << dp[i][2] << endl;
    }
    
    //cout << max(dp[n][1],dp[n][2]);
    //cout << max(choose(line1,line2,n,1) ,choose(line1,line2,n,2));

    
}
