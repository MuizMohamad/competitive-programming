#include <iostream>
#include <vector>

using namespace std;

int recursiveBF(int total,int index,int x,vector<int> price,vector<int> pages){
    int ans;
    if (index == -1){
        return 0;
    }
    if (total > x){
        return 0;
    }
    else {
        int choose = 0;
        if (total+price[index] <= x)
            choose = pages[index] + recursiveBF(total+price[index],index-1,x,price,pages);
        int notChoose = recursiveBF(total,index-1,x,price,pages);

        ans = max(choose,notChoose);
    }
    return ans;

}
int main(){
    int n,x;
    cin >> n >> x;

    vector<int> price;
    vector<int> pages;

    for (int i = 0 ; i < n ; ++i){
        int tmp;
        cin >> tmp;
        price.push_back(tmp);
    }
    for (int i = 0 ; i < n ; ++i){
        int tmp;
        cin >> tmp;
        pages.push_back(tmp);
    }

    int dp[n+1][x+1];

    for (int i = 0 ; i <= n ; ++i){
        
        for (int w = 0 ; w <= x ; ++w){
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (w - price[i-1] >= 0)
                dp[i][w] = max( 
                    pages[i - 1] + dp[i - 1][w - price[i - 1]], 
                    dp[i - 1][w]);
            else 
                dp[i][w] = dp[i-1][w];
        }
    }
    
    cout << dp[n][x];

}