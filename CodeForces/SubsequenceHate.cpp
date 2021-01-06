#include <iostream>
#include <string>
#include <vector>
#include <limits.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int suffix1 = 0;
        int suffix0 = 0;
       
        for (int i = 0 ; i < n ; ++i){
            suffix1 += (s[i] == '1');
            suffix0 += (s[i] == '0');
        }
        int ans = INT_MAX;
        int prefix0 = 0;
        int prefix1 = 0;
        for (int i = 0 ; i < n ; ++i){
            prefix1 += (s[i] == '1');
            prefix0 += (s[i] == '0');
            suffix1 -= (s[i] == '1');
            suffix0 -= (s[i] == '0'); 
            ans = min(ans,prefix1+suffix0);
            ans = min(ans,prefix0+suffix1);
        }
        cout << ans << "\n";


    }

    return 0;

}