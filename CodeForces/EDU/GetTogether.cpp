#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int n;
vector<pair<long double,long double>> vx;

bool good(long double t){
    long double segMin = -100000000000.0,segMax = 100000000000.0;
    for (auto pa : vx){
        long double x = pa.first;
        long double v = pa.second;

        long double minSegment = x - t*v;
        long double maxSegment = x + t*v;
        //cout << minSegment << " " << maxSegment << "\n";
        segMin = max(minSegment,segMin);
        segMax = min(maxSegment,segMax);
        //cout << segMin << " " << segMax << "\n\n"; 
    }

    bool segmentExist = segMin <= segMax;
    return segmentExist;

}

int main(){

    cin >> n;
    for (int i = 0; i < n ; ++i){
        pair<long double,long double> tmp;
        cin >> tmp.first >> tmp.second;
        vx.push_back(tmp);
    }

    long double left = 0; // maintain left is bad
    long double right = 10000000000.0; // maintain right is good
    
    for (int i = 0 ; i < 100 ; ++i){
        long double mid = left + (right-left)/2;
        if (good(mid)) right = mid;
        else left = mid;
    }
    cout << fixed;
    cout << setprecision(20);
    cout << right << "\n";
    
   
    //good(6.0);
    

}