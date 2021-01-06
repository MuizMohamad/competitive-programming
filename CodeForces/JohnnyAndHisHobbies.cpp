#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    vector<int> v;
    set<int> s2;
    int t;
    cin >> t;
    while(t--){

        v.clear();
        s2.clear();
        int n;
        cin >> n;

        while (n--){
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }

        bool found = false;
        set<int> s(v.begin(),v.end());  
        for (int k = 1 ; k <= 1024 ; ++k){
            s2.clear();
            for (int i = 0 ; i < v.size() ; ++i){
                int tmp2 = v[i] ^ k;
                s2.insert(tmp2);

            }
            
            if (s == s2){
                cout << k << "\n";
                found = true;
                break;
             } 
        }

        if (!found){           
        
            cout << -1 << "\n";
        
        }
    }
}