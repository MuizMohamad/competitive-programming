#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int n2 = n;
    int count8 = 0;

    while(n--){
        char tmp;
        cin >> tmp;

        if (tmp == '8') count8++;
    }

    int poss = n2/11;

    if (poss <= count8) cout << poss;
    else cout << count8;
}