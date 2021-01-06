#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> caseX = {};
        int copyN = n;
        while (n--){
            int tmp;
            cin >> tmp;
            caseX.push_back(tmp);
        }

        sort(caseX.begin(),caseX.end());

        bool can = true;
        for (int i = 1 ; i < copyN ;++i ){
            can = can && ((caseX[i]-caseX[i-1]) <= 1);
        }

        if (can){
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
}