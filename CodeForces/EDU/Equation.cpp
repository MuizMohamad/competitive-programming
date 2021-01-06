#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double c;

bool good(double x){
    return x*x + sqrt(x) >= c;
}
int main(){
    cin >> c;

    double left = 0;
    double right = 1e10;

    for (int i = 0; i < 70; ++i){
        double mid = left + (right-left)/2;
        if (good(mid)) right = mid;
        else left = mid;
    }
    cout << setprecision(20);
    cout << right << "\n";
}