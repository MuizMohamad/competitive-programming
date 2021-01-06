#include <iostream>
#include <vector>
#include <set>
#include <limits.h>

using namespace std;

int main(){
    int n,x0,y0;
    cin >> n >> x0 >> y0;
    set<double> grad;

    for (int i = 0 ; i < n ; ++i){
        int x,y;
        cin >> x >> y;
        double m = INT_MAX;
        if ((x0-x) != 0)
            m = (y0-y)/((x0-x)*1.0);
        grad.insert(m);
    }

    cout << grad.size();
}