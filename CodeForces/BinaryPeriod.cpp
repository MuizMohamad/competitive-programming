#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    string s;

    while (t--){
        cin >> s;
        bool hasZero = false;
        bool hasOne = false;
        for (int i = 0 ; i < s.length() ; ++i){
            if (s.at(i) == '1'){
                hasOne = true;
            }
            else if(s.at(i) == '0'){
                hasZero = true;
            }
        }

        if (hasOne && !hasZero){
            cout << s << "\n";
        }
        else if (!hasOne && hasZero){
            cout << s << "\n";
        }
        else {
            string ans = "";
            for(int i = 0 ; i < s.length() ;++i){
                ans = ans + "10";
            }
            cout << ans << "\n";
        }
    }
}