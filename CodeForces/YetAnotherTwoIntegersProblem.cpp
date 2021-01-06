#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a,b;
        cin >> a >> b;
        bool subs = a > b;
        long long moveCount = 0;
        long long move10 = abs(a-b)/10;
        moveCount += move10;
        long long extra = b - (a + move10*10);
        if (subs) extra = b - (a-move10*10);
        if (extra != 0) moveCount++; 
        cout << moveCount << "\n";
    }
}
