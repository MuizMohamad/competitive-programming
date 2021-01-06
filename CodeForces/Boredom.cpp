#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<long long> seq;

//int dp[100000][2];
int recursion(int index,int valueBefore){
    if (index == seq.size()){
        return 0;
    }
    int chose = 0,notChose = 0;
 
    
    if (abs(valueBefore-seq[index]) != 1)
        chose = seq[index] + recursion(index+1,seq[index]);
    notChose = recursion(index+1,valueBefore);
   

    return max(chose,notChose);

}

int main(){

    long long n;
    cin >> n;
    
    long long cnt[100001];
    long long dp[100001];
    for (int i = 1 ; i <= 100000 ; ++i){
        cnt[i] = 0;
    }
    for (long long i = 0 ; i < n ; ++i){
        long long tmp;
        cin >> tmp;
        cnt[tmp] = cnt[tmp] + 1;
        seq.push_back(tmp);
    }
    /*
    for (int i = 1; i <= 100000 ; ++i){
        int count = 0;
        for (int j = 0 ;j < n ; ++j){
            if (seq[j] == i) count++;
        }
        cnt[i] = count;
    }
    */


    dp[0] = 0;
    dp[1] = cnt[1];

    for (long long i = 2; i <= 100000 ; ++i){
        dp[i] = max(dp[i-1],dp[i-2]+cnt[i]*i);
    }

    cout << dp[100000];


  
    
   
}