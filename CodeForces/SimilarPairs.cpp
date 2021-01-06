#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int n;
        cin >> n;
        int even = 0;
        int odd = 0;
        ans.clear();
        while(n--){ 

            int tmp;
            cin >> tmp;

            if (tmp % 2 == 0){
                odd++;
            }
            else {
                even++;
            }

            ans.push_back(tmp);

        }

        if (odd % 2 == 0 && even % 2 == 0){
            cout << "YES" << "\n";
        }
        else {
            sort(ans.begin(),ans.end());
            int Nth = ans.at(0);
            bool found = false;
            for (int i = 1; i < ans.size() ; ++i){
                if (abs(ans.at(i)-Nth) == 1){
                    found = true;
                    break;
                }
                Nth = ans.at(i);
            }
            if (found){
                cout << "YES" << "\n";
            }
            else {
                cout << "NO" << "\n"; 
            }


        }
    }
}