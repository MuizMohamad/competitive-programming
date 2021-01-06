#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int str, n;

    cin >> str >> n;
    vector<pair<int,int>> d;

    for (int i = 0 ; i < n ; ++i){
        int first,sec;
        cin >> first >> sec;
        pair <int,int> dragon = {first,sec};
        d.push_back(dragon);
    }
    sort(d.begin(),d.end());
    bool canGo = true;

    for (int i = 0;i < n ; i++){
        pair<int,int> drag = d.at(i);
        if (drag.first >= str ){
            canGo = false;
            break;
        }
        else if ( drag.first < str){
            str += drag.second;
        }

    }
    if (!canGo){
        cout << "NO";
    }
    else {
        cout << "YES";
    }
    /*
    for (auto x : d){
        cout << x.first << " " << x.second << endl;
    }
    */
    
}

    
