#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    vector<pair<int,int>> lap;
    cin >> n;

    while (n--){
        int a,b;
        cin >> a >> b;

        pair<int,int> tmp;
        tmp.first = a;
        tmp.second = b;

        lap.push_back(tmp);
    }

    sort(lap.begin(),lap.end());
    bool found = true;
    for (int j = 0 ; j < lap.size() ; ++j){
        pair<int,int> tmp = lap.at(j);
        found = found && (tmp.first == tmp.second);   
    }
    if (found){
        cout << "Poor Alex";
    }
    else {
        cout << "Happy Alex";
    }
}