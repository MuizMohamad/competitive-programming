#include <iostream>

using namespace std;
pair<long long,long long> choose(long long  a, long long  b,long long type){
    pair<long long ,long long > initial = {a,b};
    if (a > b){
        if (type == 0){
            initial.first--;
        }
        else{
            initial.second--;
        }
    }
    else {
        if (type == 0){
            initial.second--;
        }
        else{
            initial.first--;
        }
    }

    return initial;
}

int main(){
    long long t;
    cin >> t;

    while (t--){
        long long a,b,n,m;

        cin >> a >> b >> n >> m;

        
        if ( m <= min(a,b) && (n + m <= a + b)){
            cout << "Yes" << "\n";
        }
        else {
            cout << "No" << "\n";
        }
    }
}