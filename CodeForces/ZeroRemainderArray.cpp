#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
#define int long long

using namespace std;

int32_t main(){
    int t;
    cin >> t;
    vector<int> needs;
    while(t--){
        needs = {};
        int n,k;
        cin >> n >> k;

        for (int i = 0 ; i < n ; ++i){
            int tmp;
            cin >> tmp;
            int div = tmp/k;
            if (tmp % k != 0)
                needs.push_back(k*(div+1) - tmp);
            else {
                needs.push_back(0);
            }
        }
        sort(needs.begin(),needs.end());
        int count = 0;
        int cur = 1;
        for(int i = 0 ; i < n ; ++i){
            
            if (needs[i] > 0){
                if (needs[i] == cur){
                    needs[i] = needs[i] + count*k;
                    count++;
                }
                else{
                    count = 1;
                    cur = needs[i];
                }
            }
        }

        sort(needs.begin(),needs.end());
        int ans = 0;
        int x = 0;
        
        int start = 0;

        while(needs[start] == 0){
            start++;
        }
       
        if (needs[n-1] > 0)
            cout << needs[n-1]+1 << endl;
        else {
            cout << 0 << endl;
        }
    }   

}