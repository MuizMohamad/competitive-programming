#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,n;
        cin >> x >> y >> n;
        int m = (n-y)/x;
        cout << m*x + y << "\n";
    }
}