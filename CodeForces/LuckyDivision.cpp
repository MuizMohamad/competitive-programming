#include <iostream>
using namespace std;

int main(){
    int n;
    bool lucky = true;
    bool almostLucky = false;
    int luckies[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    cin >> n;

    int test = n ;

    while (test > 0){
        lucky = lucky && ( test % 10 == 4 || test % 10 == 7);
        test /= 10;
        
    }

    if (!lucky){
        for (int i = 0 ; i < 14 ; ++i){
            if (n >= luckies[i] && n % luckies[i] == 0 ){
                almostLucky = true;
            }
        }
    }

    if (lucky || almostLucky){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}