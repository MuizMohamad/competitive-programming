#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> a;
    for (int i = 0 ; i < n-1 ; ++i){
        int tmp;
        cin >> tmp;
        a.insert(tmp);
    }
    for (int i = 1 ; i <= n ; ++i){
        if (a.count(i) == 0){
            cout << i;
            break;
        }
    }

    return 0;
}