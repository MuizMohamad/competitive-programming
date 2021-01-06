#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> arr = {};
        set<int> listInt = {};
        for (int i = 0 ; i < n ; ++i){
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
            listInt.insert(tmp);
        }

        if (listInt.size() <= k){
            if (listInt.size() == n){
                cout << n << "\n";
                for (auto x : arr){
                    cout << x << " ";
                }
                cout << "\n";
            }
            else {
                int cnt = 1;
                while (listInt.size() != k){
                    if (listInt.count(cnt) == 0){
                        listInt.insert(cnt);
                    }
                    else {
                        cnt++;
                    }
                }
                cout << n*k << "\n";
                for (int i = 0 ; i < n ; ++i){
                    for (auto x : listInt){
                        cout << x << " ";
                    }
                }
                cout << "\n";
            }
        }
        else {
            cout << -1 << "\n";
        }

    }
}