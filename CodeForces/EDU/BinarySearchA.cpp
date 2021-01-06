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

        int left = 0;
        int right = n-1;
        bool found = false;
        while(left <= right){
            int mid = left + (right-left)/2;
            if (ns[mid] == q){
                found = true;
                break;
            }
            else if(ns[mid] > q){
                right = mid-1;
            }
            else {
                left = mid + 1;
            }
        }

        if (found) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n"; 
        }
        
        
    }
}
