#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> s = {};

        for (int i = 0 ; i < n ;++i){
            int tmp;
            cin >> tmp;
            s.push_back(tmp);
        }

        int i = 0;
        bool can = s[0] < s[n-1];

        if (can){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
            
        
    }
}