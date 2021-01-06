#include <iostream>
#include <vector>
using namespace std;

long long doSec(long long x,long long y,long long a, long long b);

long long doFirstthenSec(long long x,long long y,long long a, long long b){

    long long dollars = 0;

    if (abs(x) > abs(y)){
        dollars += b*abs(y);
        
        if (x > 0){
            
            x -= abs(y);
            
        }
        else {
            
            x += abs(y);
            
        }
        y = 0;
        dollars += doSec(x,y,a,b);
    }
    else if (abs(x) < abs(y)){
        dollars += b*abs(x);
        
        if (y > 0){
            
            y -= abs(x);
            
        }
        else {
            
            y += abs(x);
            
        }
       x = 0;
        dollars += doSec(x,y,a,b);
    }
    else {
        dollars += b*abs(x);
    }
    
    return dollars;
}

long long doSec(long long x,long long y,long long a, long long b){

    long long dollars = 0;
    
    dollars = a*abs(x) + a*abs(y);

    return dollars;
}

int main(){

    int t;
    cin >> t;
    vector<long long> ans;

    while (t--) {

        long long x,y;
        long long a,b;
        cin >> x >> y;
        cin >> a >> b;
        long long dollars = 0;
        
        long long dollarsFirst = doFirstthenSec(x,y,a,b);
        long long dollarsSec = doSec(x,y,a,b);
        
        ans.push_back(min(dollarsFirst,dollarsSec));
        
        
    }
    
    for (auto x : ans){
        cout << x << "\n";
    }
}
    
