#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;  
        vector<long long> as = {};
        vector<long long> bs = {};
        long long minA = INT_MAX;
        long long minB = INT_MAX;
        for (int i = 0 ; i < n ; ++i){
            long long a;
            cin >> a;
            minA = min(minA,a);
            as.push_back(a);
        }
        for (int i = 0 ; i < n ; ++i){
            long long b;
            cin >> b;
            minB = min(minB,b);
            bs.push_back(b);
        }
        long long counter = 0;
        for (int i = 0 ; i < n ;++i){

            long long curA = as[i];
            long long curB = bs[i];
            long long difA = curA - minA;
            long long difB = curB - minB;

            if (difA > difB){
                counter += difB;
                curB = minB;
                curA = curA - difB;
            }
            else if (difB > difA){
                counter += difA;
                curA = minA;
                curB = curB - difA;
            }
            else {
                counter += difA;
                curA = minA;
                curB = minB;
            }
                
            if (curA - minA > 0){
                counter += curA-minA;
            }
            else if (curB - minB > 0){
                counter += curB-minB;
            }
            
        }

        cout << counter << "\n";



    }
}
