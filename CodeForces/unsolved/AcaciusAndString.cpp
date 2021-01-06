#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        string aba = "abacaba";
        vector<pair<int,bool>> indexS = {};
        string s;
        cin >> s;
        bool can = false;
        int counter = 0;
        for (int j = 0 ; j < n-6 ; ++j ){
            string init = "";
            int sP = 0;
            bool containQ = false;
            for (int i = j ; i < j+7 ; i++){
                if (s[i] == aba[sP] || s[i] == '?'){
                    if (s[i] == '?'){
                        containQ = true;
                    }
                    init.push_back(s[i]);
                    sP++;
                }
            }
            
            if (init.length() == 7){
                pair<int,bool> test;
                test.first = j;
                test.second = containQ;
                indexS.push_back(test);
                if(!containQ){
                    counter++;      
                }
                
                can = true;
                if (counter >= 2){
                    can = false;
                }
            }
        }

        if (can){

            string ans = "";
            
            int firstIndex = indexS[0].first;
            int lastIndex = firstIndex + 6;

            for (auto x : indexS ){
                if (x.second == false){
                   
                    firstIndex = x.first;
                    lastIndex = firstIndex + 6;
                    break;
                }
            }
            
            int slowP = 0;
            for (int i = 0 ; i < n ; ++i){
                if (i >= firstIndex && i <= lastIndex){

                    if (s[i] != '?'){
                        ans.push_back(s[i]);
                    }
                    else{
                        ans.push_back(aba[slowP]);
                    }
                    slowP++;
                }
                else{
                    if (s[i] != '?'){
                        ans.push_back(s[i]);
                    }
                    else{
                        ans.push_back('z');
                    }
                    
                }
            }
            int counter2 = 0;
            for (int j = 0 ; j < n-6 ; ++j ){
                string init = "";
                int sP2 = 0;
                bool containQ = false;
                for (int i = j ; i < j+7 ; i++){
                    if (ans[i] == aba[sP2]){
                        
                        init.push_back(s[i]);
                        sP2++;
                    }
                }
                
                if (init.length() == 7){
                   counter2++;     
                }
            }
            if(counter2 >= 2){
                cout << "No" << "\n";
            }
            else{
                cout << "Yes" << "\n";
                cout << ans << "\n";
            }
            
       
        }
        else {
            cout << "No" << "\n";
        }
        
        
    }
}