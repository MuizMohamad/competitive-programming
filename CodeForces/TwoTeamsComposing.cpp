#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        vector<int> num;
        num.clear();
        int unique = 0;
        int same = 1;
        int sameMax = 1;
        while (n--){
            int a;
            cin >> a;
            num.push_back(a);
        }
        sort(num.begin(),num.end());
        int nth = 0;
        for(int i = 0; i <  num.size() ; ++i){
            if(num.at(i) > nth){
                same = 1;
                unique++;
            }
            else if(num.at(i) == nth){
                same++;
                sameMax = max(sameMax,same);

            }

            nth = num.at(i);
        }
        //cout << sameMax << " " << unique << "\n";
        cout << max(min(sameMax-1,unique),min(unique-1,sameMax)) << "\n";
        /*
        for (auto x : num){
            cout << x << " ";
        }

        cout << "test" << "\n";
        */
    }
}