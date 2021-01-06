#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>

using namespace std;

vector<long long> vec;
long long t,w,n;

int main(){
    cin >> t;

    for (long long  i = 1 ; i <= t ; ++i){
        vec = {};
        long long minSum = LLONG_MAX;
        cin >> w >> n;
        for (long long j = 0 ; j < w ;++j){
            long long tmp;
            cin >> tmp;
            vec.push_back(tmp);
        }

        for (long long same = 1 ; same <= n ; same++){
            long long sum = 0;
            for (int j = 0 ; j < w ; ++j){
                if (same < vec[j]) sum += min(abs(vec[j] - same),(n-vec[j])+same);
                else if (same > vec[j]) sum += min(abs(vec[j] - same),vec[j]+(n-same));
            }
            minSum = min(minSum,sum);
        }

        cout << "Case #" << i << ": " << minSum <<"\n"; 

    }
}