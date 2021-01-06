#include <iostream>

using namespace std;

int main(){
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    double bm = b/(m*1.0);
    int sum = 0;
    if (bm < a){
        while (n > 0){
            int test = n - m;
            if (test < 0){
                sum += min(n*a,b);
                
                n = 0;
            }
            else {
                sum += b;
                n -= m;
            }
        }
    }
    else {
        while (n > 0){
            sum += a;
            n--;
        }
    }

    cout << sum;
}