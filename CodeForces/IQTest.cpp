#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> ns;
    int evenCounter = 0;
    int oddCounter = 0;
    while (n--){
        int tmp;
        cin >> tmp;
        if (tmp % 2 == 0){
            evenCounter++;
        }
        else {
            oddCounter++;
        }
        ns.push_back(tmp);
    }
    if (oddCounter == 1){
        for(int i = 0 ; i < ns.size(); ++i){
            if (ns[i] % 2 == 1){
                cout << i+1 << "\n";
            }
        }
    }
    else {
        for(int i = 0 ; i < ns.size(); ++i){
            if (ns[i] % 2 == 0){
                cout << i+1 << "\n";
            }
        }
    }
   
}