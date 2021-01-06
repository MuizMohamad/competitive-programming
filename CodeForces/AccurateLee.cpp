#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector<string> results;
    int t;
    cin >> t;
    while (t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        auto itr1 = find(s.begin(),s.end(),'1');
        int firstOne = itr1 - s.begin();
        int lastZ = 0;
        for (int i = n-1 ; i >= 0 ; --i){
            if (s.at(i) == '0'){
                lastZ = i;
                break;
            }
        }

        if(firstOne < lastZ){
            s.erase(firstOne,lastZ-firstOne);
        }
        
        results.push_back(s);

    }

    for (auto x : results){
        cout << x << endl;
    }
}