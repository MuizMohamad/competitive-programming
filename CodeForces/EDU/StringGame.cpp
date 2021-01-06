#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string t;
string p;
vector<int> order;

bool good(int x){
    if (x == 0){
        return true;
    }
    string copyT = t;
    for (int i = 0 ; i < x ; ++i){
        copyT[order[i]-1] = '0';
    }
    int sP = 0;
    int fP = 0;

    int k = t.size();
    int l = p.size();

    bool can = false;
    while(fP <= k){
        if (sP == l){
            can = true;
            break;
        }
        else if (copyT[fP]==p[sP]){
            sP++;
        }
        fP++;
    }
    return can;

}

int main(){
    cin >> t;
    cin >> p;

    int k = t.size();
    for (int i = 0 ; i < k ; ++i){
        int tmp;
        cin >> tmp;
        order.push_back(tmp);
    }

    int left = 0; // maintain left is good
    int right = k; // maintain right is bad

    while(right > left + 1){
        int mid = left + (right-left)/2;
        if (good(mid)) left = mid;
        else right = mid;
    }
 
    cout << left;

}