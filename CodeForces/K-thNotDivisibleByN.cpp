#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;
        int box = k/(n-1);
        if (k % (n-1) == 0){
            box--;
        }
        int start = (box)*n;
        int ans = start + (k- (box)*(n-1));
        cout << ans << "\n";
    }
}