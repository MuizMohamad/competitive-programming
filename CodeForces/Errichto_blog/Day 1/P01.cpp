#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    vector<int> ns;
    cin >> n;
    while(n--){
        int tmp;
        cin >> tmp;

        ns.push_back(tmp);
    }

    reverse(ns.begin(),ns.end());

    for (auto x : ns){
        cout << x << " ";
    }
}