#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    cin >> n;

    vector<int> ns;

    for (int i = 0; i < n ; ++i){
        int tmp;
        cin >> tmp;
        ns.push_back(tmp);
    }

    sort(ns.begin(),ns.end());
    cin >> k;
    while(k--){
        int q1,q2;
        cin >> q1 >> q2; 

        int leftest = -1;
        int rightest = -1;
        
        int left = 0;
        int right = n-1;
        while(left <= right){
            int mid = left + (right-left)/2;
            if (ns[mid] >= q1){
                leftest = mid;
                right = mid-1;
            }
            else {
                left = mid+1;
            }
        }

        left = 0;
        right = n-1;
        while(left <= right){
            int mid = left + (right-left)/2;
            if (ns[mid] <= q2){
                rightest = mid;
                left = mid+1;
            }
            else {
                right = mid-1;
            }
        }
        int ans = 0;
        if (leftest != -1 && rightest != -1){
             ans = rightest - leftest + 1;
        }
           

        cout << ans << "\n";


    }
}