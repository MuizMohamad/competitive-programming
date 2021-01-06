#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;


int main(){

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> value = {};
        set<int> type = {};
        
        for (int i = 0 ; i < n ; ++i){
            int tmp;
            cin >> tmp;
            value.push_back(tmp);
        }
        for (int i = 0 ; i < n ; ++i){
            int tmp;
            cin >> tmp;
            type.insert(tmp);
        }
     
        if (type.size() == 2) cout << "Yes" << "\n";
        else {
            bool can = true;
            for (int i = 0 ; i < n-1 ; ++i){
                can = can && (value[i] <= value[i+1]);
            }
            if (can) cout << "Yes" << "\n";
            else cout << "No" << "\n";

        } 
        
    }
  
}