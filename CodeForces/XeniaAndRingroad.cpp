#include <iostream>

using namespace std;

int main (){
    long long n,m;
    long long time = 0;
    cin >> n >> m;
    long long location = 1;
    while (m--){
        long long houseNum;
        cin >> houseNum;
        if (houseNum >= location){
            time += houseNum - location;
        }
        else{
            time += n - (location - houseNum) ;
            
        }
        location = houseNum;
    }

    cout << time;
}