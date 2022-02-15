#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

int main(){

    long long n,L,a;

    cin >> n >> L >> a;

    vector<int> ts;
    map<long long,long long> ti;
    while(n--){
        long long t,li;
        cin >> t >> li;

        ts.push_back(t);
        ti[t] = li; 
    }

    priority_queue<int, vector<int>, greater<int>> q(ts.begin(), ts.end());

    int count = 0;
    int curtime = 0;

    while(!q.empty()){

        int cur_cust = q.top();
        
        count += (cur_cust-curtime)/a;
        curtime = cur_cust + ti[cur_cust];
        q.pop();
    }

    count += (L-curtime)/a;

    cout << count << "\n";


}
