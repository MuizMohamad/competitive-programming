#include <iostream>

using namespace std;

int main(){
    int a,b;
    int time = 0;
    int wentOutCandles = 0;
    cin >> a >> b;
    while (a--){
        time += 1;
        wentOutCandles += 1;
        if(wentOutCandles == b){
            a++;
            wentOutCandles = 0;
        }
    }
    cout << time;
}