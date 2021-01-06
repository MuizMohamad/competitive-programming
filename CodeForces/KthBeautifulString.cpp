#include <iostream>
#include <string>

using namespace std;

long long sumN(long long n){
    return n*(n+1)/2;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        long long test = 1;

        while(sumN(test) < k){
            test++;
        }
        long long firstIndex = n-test;
        long long secondIndex = (sumN(test)-k);
        //cout << "ayam " << firstIndex<< " "<< sumN(test) << " " << secondIndex << "\n";
        string ans = "";
        for (int i = 1 ; i <= n ; ++i){
            if (i == (firstIndex + secondIndex + 1) || i == firstIndex){
                ans += "b";
            }
            else {
                ans += "a";
            }
        }
        cout << ans << "\n";
    }
    


}