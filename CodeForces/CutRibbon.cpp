#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    vector<int> ns = {a,b,c};
    int copyN = n;
    sort(ns.begin(),ns.end());
   
    int maxI = n/a;
    int maxJ = n/b;
    int k = 0;
    int ans = 0;

   
    for (int i = 0 ; i <= maxI ; ++i){
        for (int j = 0 ; j <= maxJ ; ++j){
            int test = (n - (a*i) - b*j);
            int k =  test / c;
            if (test == k*c && k >= 0){
                
                ans = max(ans,i+j+k);
            }  
        }
    }
    
    
    cout << ans;


}