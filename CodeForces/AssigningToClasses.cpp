#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> num;
    while (t--){
        num.clear();
        int n;
        cin >> n;
        for (int i = 0 ; i < 2*n ; ++i){
            int a;
            cin >> a;
            num.push_back(a);
        }

        sort(num.begin(),num.end());

        cout << num.at(n)- num.at(n-1) << "\n";
    }
}