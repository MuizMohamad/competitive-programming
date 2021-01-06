#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n,k;
        cin >> n >> k;
        if (k >= n){
            cout << 1 << "\n";
        }
        else {
            //int start = min(n/2,k);
            int ans = n;
            for (int i = 2 ; i*i <= n ; i++){
                if (n % i == 0) {
                    if (i <= k) {
                        ans = min(ans, n / i);
                    }

                    if (n / i <= k) {
                        ans = min(ans, i);
                    }
			    }   
            }
            cout << ans << "\n";
        }
    }
}