#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> price;
    vector<int> coin;
    while (n--){
        int tmp;
        cin >> tmp;
        price.push_back(tmp);
    }
    int q;
    cin >> q;
    sort(price.begin(),price.end());
    while (q--){
        int c;
        cin >> c;
        
        int L = 0;
        int R = price.size()-1;
        int target = 0;
        while (L <= R){
            int mid = L + (R-L)/2;
            if (price.at(mid) <= c ){
                L = mid + 1;
                target = mid+1;
            }
            else {
                R = mid - 1;
            }
        }
        

        coutt << target << "\n";
    }
}