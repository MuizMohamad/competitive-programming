#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> ns;

    for (int i = 0 ; i < n ; ++i){
        int tmp;
        cin >> tmp;
        ns.push_back(tmp);
    }

    while(k--){
        int q;
        cin >> q;

        int ans = n+1;

        int L = 0;
        int R = n-1;

        while(L <= R){
            int mid = L+(R-L)/2;
            if (ns[mid]<q){
                
                L = mid+1;
            }
            else {
                ans = mid+1;
                R = mid-1;
            }
        }

        cout << ans << "\n";
    }
}