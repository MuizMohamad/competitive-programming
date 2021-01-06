#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){

        long long n,k;
        cin >> n >> k;

        vector<long long> ints = {};
        vector<long long> ks = {};

        for (long long i = 0 ; i < n ; ++i){
            long long tmp;
            cin >> tmp;
            ints.push_back(tmp);
        }

        for (long long i = 0 ; i < k ; ++i){
            long long tmp;
            cin >> tmp;
            ks.push_back(tmp);
        }

        sort(ints.begin(),ints.end());
        sort(ks.begin(),ks.end());
        long long left = 0LL;
        long long right = n-1;
        long long start = 0LL;
        long long end = k-1;
        long long ans = 0LL;
        while(ks[start] == 1LL && start < k){
            ans += 2*(ints[right]);
            right--;                
            start++;
        }
        while(left < right){
           
            long long count = ks[end];
            ans += ints[right];
            ans += ints[left];
            right--;
            left++;

            count -= 2LL;
            while(count--){
                left++;
            }
            end--;

        }
        cout << ans << "\n";
    }
}