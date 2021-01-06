#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <limits.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> s;

    for (int i = 0 ; i < n; ++i){
        long long tmp;
        cin >> tmp;
        s.push_back(tmp);
    }
    vector<long long> testSorted = s;
    vector<long long> testReverse = s;
   
    sort(testSorted.begin(),testSorted.end());
    reverse(testReverse.begin(),testReverse.end());

    long long curMax,curMin;
    int firstIndex = -1,secIndex = -1;
    int i = 0;
    vector<pair<int,int>> ans;

    if (testReverse == testSorted){
        cout << "yes" << "\n";
        cout << 1 << " " << n;  
    }
    else if(s == testSorted){
        cout << "yes" << "\n";
        cout << 1 << " " << 1;
    }
    else{
        while (i < n-1){
            
            if (s[i] > s[i+1]){
                curMax = s[i];
                curMin = 0;
                if (i > 0)
                    curMin = s[i-1];
                firstIndex = i+1;
                while (s[i] > s[i+1] && i < n-1){
                    i++;
                }
                if ((s[i] > curMin && s[i+1] > curMax) || (i == n-1 && s[i] > curMin)){
                    
                    pair<int,int> tmpAns;
                    tmpAns.first = firstIndex;
                    tmpAns.second = i+1;
                    ans.push_back(tmpAns);
                }

            }
            else {
                i++;
            }

        }
        int counter = ans.size();
        if (counter == 1){
            cout << "yes" << "\n";
            cout << ans[0].first << " " << ans[0].second;
        }
        else {
            cout << "no" << "\n";
        }
    }

    
    
}