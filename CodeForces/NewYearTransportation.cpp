#include <iostream>

using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    int loc = 1;
    bool can = false;

    for (int i = 1 ; i < n ; ++i) {
        int a;
        cin >> a;
        if (i == loc){
            loc += a;
        }
        if (loc == t){
            can = true;
        }
    }

    if (can){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}