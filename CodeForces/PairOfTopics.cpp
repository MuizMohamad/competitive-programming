#include <iostream>
#include <vector>
#include <algorithm>

#define int long long
using namespace std;

int32_t main(){
    int n;
    cin >> n;

    vector<int> a;
    vector<int> b;
    
    for (int i = 0 ; i < n ; ++i){
        int tmp;
        cin >> tmp; 
        a.push_back(tmp);
    }
    for (int i = 0 ; i < n ; ++i){
        int tmp;
        cin >> tmp; 
        b.push_back(tmp);
    }
   
    vector<int> c;
    for (int i = 0 ; i < n ; ++i){
        c.push_back(a[i]-b[i]);
    }
    sort(c.begin(),c.end());

    int ans = 0;
    int left = 0;
    int right = n-1;
    
    while (left < right){
        while(c[left] + c[right] <= 0 && left < right){
            left++;
        }
        if (c[left] + c[right] > 0){
            ans += (right - left);
        }
        
        //left = 0;
        right--;
    }

    cout << ans;

    
}