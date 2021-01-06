#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool checkPalindrome(string s){
    string reverseS = s;
    reverse(reverseS.begin(),reverseS.end());
    return reverseS == s;
}


int main(){
    int n,m;
    vector<string> str;
    vector< pair<string,string> > pair;
    vector<string> palindrome;
    cin >> n >> m;
    while (n--){
        string tmp;
        cin >> tmp;
        str.push_back(tmp);
    }

    for (int i = 0 ; i < str.size() ;++i){
        if (checkPalindrome(str.at(i))){
            palindrome.push_back(str.at(i));
        }
        string reverseS = str.at(i);
        reverse(reverseS.begin(),reverseS.end());
        for (int j = i+1 ; j < str.size() ; ++j){
            if (str.at(j) == reverseS){
                //pair<string,string> tmp2;
                //tmp2.first = str.at(i);
                //tmp2.second = str.at(j);
                pair.push_back({str.at(i),str.at(j)});
            }
        }
    }

    int length;
    string ans;
    
    if (palindrome.size() == 0){
        length = pair.size()*2*m;
        
    }
    else {
        length = m + pair.size()*2*m;
        ans = palindrome.at(0);
    }

    for (int i = 0 ; i < pair.size() ; ++i){
        ans = pair[i].first + ans + pair[i].second ; 
    }
    cout << length << "\n";
    cout << ans;

}