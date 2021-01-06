#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> happy;
        while(n--){
            int tmp;
            cin >> tmp;
            happy.push_back(tmp);
        }
        sort(happy.begin(),happy.end());
           
    }
}