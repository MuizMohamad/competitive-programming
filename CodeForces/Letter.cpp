#include <iostream>
#include <vector>
#include <string>
#include <limits.h>

using namespace std;

int dp[100000][2];
//vector<vector<int>> dp(1000000,vector<int>(2,-1));
int recurse(int index, int must){

    int tmp1,tmp2;
  
    if (index == s.size()){
        //cout << s << " " << must << endl;
        return 0;
    }
    if (dp[index][must] != -1 ){
        return dp[index][must];
    }
    
    int tmp = INT_MAX;
    if (isupper(s[index])){
        
        tmp1 = INT_MAX;
        
        if (!must)
            //tmp = min(tmp,recurse(index+1,0));
            tmp1 = recurse(index+1,0);
        
        //s[index] = tolower(s[index]); 
        tmp2 = 1 + recurse(index+1,1);
        //tmp = min(tmp,1 + recurse(index+1,1));
    }
       
    else {
        
        tmp1 = recurse(index+1,1);
        //tmp = min(tmp,recurse(index+1,1));
        tmp2 = INT_MAX;
        if (!must){
            //s[index] = toupper(s[index]); 
            tmp2 = 1 + recurse(index+1,0);
            //tmp = min(tmp,1 + recurse(index+1,0));
        }
        

    }
    int ans = min(tmp1,tmp2);
    //int ans = tmp;
    dp[index][must] = ans;
    return ans;
    
}
int main(){
    string s;
    cin >> s;
    
    for (int i = 0 ; i < 100000 ; ++i){
        for (int j = 0 ; j <2 ;++j){
            dp[i][j] = -1;
        }
    }
    int n = s.size();
    int first,second;

    if (isupper(s[0])){
        first = recurse(1,0);
        //s[0] = tolower(s[0]);
        second = 1 + recurse(1,1);
    }
    else {
        first = recurse(1,1);
        //s[0] = toupper(s[0]);
        second = 1 + recurse(1,0);
    }
    
   
    cout << min(first,second);
}

 /*
    int n = s.size();
    int dp2[n][2];
    dp2[0][0] = dp2[0][1] = 0;
    for (int i = 1 ; i < n ; ++i){
        int caps = INT_MAX;
        int small = INT_MAX;
        if (isupper(s[i-1])){
            if (isupper(s[i])){
                caps = dp2[i-1][0];
                small = 1 + dp2[i-1][1];
            }
            else{
                caps = 1 + dp2[i-1][0];
                small = dp2[i-1][1];
            }
            
        }
        else {
            
             if (isupper(s[i])){
                caps = 1 + dp2[i-1][0];
                small = dp2[i-1][1];
            }
            else{
               
                small = dp2[i-1][1];
            }
        }

        dp2[i][0] = caps;
        dp2[i][1] = small;

    }
    */
    // cout << min(dp2[n-1][0],dp2[n-1][1]);