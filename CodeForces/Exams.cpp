#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int,int>> days;
    int maxB = 0;
    for (int i = 0 ; i < n ; ++i){
        int a,b;
        pair<int,int> tmp;
        cin >> a >> b;
        maxB = max(b,maxB);
        tmp.first = a;
        tmp.second = b;
        days.push_back(tmp);
    }   

    sort(days.begin(),days.end());
    int best = days[0].second;
    for (int i = 1 ; i < n ; ++i){
        if (days[i].second >= best){
            best = days[i].second;
        }
        else {
            best = days[i].first;
        }
    }
    cout << best;


}