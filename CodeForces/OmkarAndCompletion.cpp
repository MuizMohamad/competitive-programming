#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector<int> ans;
        ans.clear();
        
        for (int i = 0 ; i < n ;++i){
            ans.push_back(1);
        }

        for (auto x : ans){
            cout << x  << " ";
        }

        cout << "\n";
    }
}