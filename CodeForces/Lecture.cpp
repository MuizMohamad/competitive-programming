#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<pair<string,string>> language;

    while (m--){
        string first;
        string sec;
        cin >> first >> sec;
        pair<string,string> test ;
        test.first = first;
        test.second = sec;
        language.push_back(test);
    }
    vector<string> ans;
    while(n--){
        string temp;
        cin >> temp;
        for (auto x : language){
            if (temp == x.first){
                if ((x.second).length() < x.first.length()){
                    ans.push_back(x.second);
                }
                else {
                    ans.push_back(x.first);
                }
            }
        }
    }

    for (auto x : ans){
        cout << x << " ";
    }
}