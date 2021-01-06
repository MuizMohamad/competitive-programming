#include <iostream>

using namespace std;

long long w,h,n;

bool good(long long x){
    return (x/w)*(x/h) >= n;
}

int main(){
    cin >> w >> h >> n;

    long long left = 0;
    long long right = 1;
    while(!good(right)) right *= 2;
    
    while(right > left+1){
        long long mid = left + (right-left)/2;
        if (good(mid)){
            right = mid;
        }
        else {
            left = mid;
        }
    }

    cout << right << "\n";
}