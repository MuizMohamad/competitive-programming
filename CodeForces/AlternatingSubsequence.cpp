#include <iostream>
#include <vector>

using namespace std;
bool oppsign(int a,int b){

    return (a > 0 && b < 0) || (a < 0 && b > 0);
}
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> ns = {};
        vector<vector<int>> colls = {};
        vector<long long> sums = {};
        while(n--){
            int tmp;
            cin >> tmp;
            ns.push_back(tmp);
        }

        int sp = 0;
        int fp = 1;

        while (fp < ns.size()){
            vector<int> tmp = {};
            while(!oppsign(ns[sp],ns[fp]) && fp < ns.size()){
                fp++;
            }
            if (fp == ns.size() - 1 && !oppsign(ns[sp],ns[fp])){
                for (int i = sp ; i <= fp ;++i){
                    tmp.push_back(ns[i]);
                }
            }
            else {
                for (int i = sp ; i < fp ;++i){
                    tmp.push_back(ns[i]);
                }
               
            }
            
            colls.push_back(tmp);
            sp = fp;
         
        }
        if (ns.size() == 1){
            cout << ns[0] << "\n";
        }
        else {
            long long sum = 0;
            for (auto x : colls){
                int mx = x[0];
                for (auto y : x){
                    mx = max(mx,y);
                }
                sum += mx;
            }

            cout << sum << "\n";
        }
        
        
    }
}