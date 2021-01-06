#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,l,r,x;
    cin >> n >> l >> r >> x;
    int copyN = n;
    vector<int> ns;
    while (n--){
        int tmp;
        cin >> tmp;
        ns.push_back(tmp);
    }
    int w = 0;
    for (int mask = 0; mask < (1 << copyN) ; mask++){

        long long sum = 0;
        int maxN = 0;
        int minN = 1000001;
        for (int i = 0 ; i < copyN ; ++i){
            if (mask & (1 << i)){
                sum += ns[i];
                maxN = max(ns[i],maxN);
                minN = min(ns[i],minN);
            }
        }
        //cout << "Test :" << sum << " " << maxN << " " << minN << endl ;
        if (sum <= r && sum >= l && (maxN - minN) >= x ){
            w++;
        }

    }
    cout << w;
}