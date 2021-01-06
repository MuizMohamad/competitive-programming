#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> ms;
    vector<int> ns;

    int m;
    cin >> m;

    while(m--){
        int tmp;
        cin >> tmp;
        ms.push_back(tmp);
    }
    int n;

    cin >> n;
    while(n--){
        int tmp2;
        cin >> tmp2;
        ns.push_back(tmp2);    
    }

    sort(ms.begin(),ms.end());
    sort(ns.begin(),ns.end());

    int i = 0;
    int j = 0;
    int counter = 0;
    while (i < ms.size() && j < ns.size()){
        int first = ms[i];
        int second = ns[j];

        if (first < second-1){
            i++;
        }
        else if (second < first-1){
            j++;
        }
        else if (second-first <= 1 || first-second <= 1){
            counter++;
            i++;
            j++;
        }

    }

    cout << counter;
}