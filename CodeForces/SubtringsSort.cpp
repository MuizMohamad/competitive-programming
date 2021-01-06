#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool stringComparison(string x,string y){
    if (x.length() == y.length()){
        return x > y;
    }
    else{
        return x.length() < y.length();
    }
}
int main(){
    int n;
    cin >> n;
    vector<string> str;

    while (n--){
        string tmp;
        cin >> tmp;

        str.push_back(tmp);
    }
    if (str.size() == 1){
        cout << "YES" << "\n";
        cout << str.at(0);
    }
    else {
        sort(str.begin(),str.end(),stringComparison);
        
        bool substr = true;;
        for (int i = 1 ; i < str.size() ; ++i){
            size_t found = (str.at(i)).find(str.at(i-1));
            substr = substr && (found != std::string::npos);
        }
        if (substr){
            cout << "YES" << "\n";
            for (auto x: str){
                cout << x << "\n";
            }
        }
        else {
            cout << "NO";
        }
    }
    
}
