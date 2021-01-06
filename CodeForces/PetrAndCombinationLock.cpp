#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    int copyN = n;
    vector<int> degrees;
    while (n--){
        int tmp;
        cin >> tmp;
        degrees.push_back(tmp);
    }
    bool can = false;
    for (int mask = 0 ; mask < (1 << copyN) ; mask++){
        long long sum = 0;
        
        for (int i = 0 ; i < copyN; ++i){
            
            if (mask & (1 << i)){
                sum += degrees[i];
            }
            else {
                sum -= degrees[i];
            }
        }
        
        if (sum % 360 == 0){
            can = true;
        }
    }
    
    if (can){
        cout << "YES";
    }
    else {
        cout << "NO";
    }


}