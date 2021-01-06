#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int diff[s.size()];
    int sum[s.size()];
    int sumT = 0;
    for (int i = 1 ; i < s.size() ; ++i){
        if (s.at(i) == s.at(i-1)){
                diff[i-1] = 1;
        }
        else {
                diff[i-1] = 0;
        }
        sumT += diff[i-1];
        sum[i-1] = sumT;
    }
    
    int m;
    cin >> m;
    while (m--){
        int l,r;
        cin >> l >> r;
        int ans = 0;
        if (l == 1){
            ans = sum[r-2]; 
        }
        else {
            ans = sum[r-2]-sum[l-2];
        }
        

        cout << ans << "\n";
    }

    
}