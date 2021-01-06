#include <iostream>
#include <vector>
#include <utility>
#include <iomanip>

using namespace std;
double dp[151][2];
vector<pair<int,int>> coal(150,{0,0});

int n;

int main(){
    int t;
    cin >> t;

    for (int i = 0 ; i <= 150; i++){
        for (int j = 0; j <= 150 ; ++j){
            dp[i][j] = -1.0;
        }
    }
    while(t--){
        cin >> n;
        for(int i = 0 ; i < n ; ++i){
            int tmp1,tmp2;
            cin >> tmp1 >> tmp2;
            pair<int,int> tmp;
            tmp.first = tmp1;
            tmp.second = tmp2;
            coal[i] = tmp;
        }
        cout << setprecision(20) ;
        
        for(int i = 0 ; i <= n ; ++i){
            dp[i][0] = 
        }


        
    }
}