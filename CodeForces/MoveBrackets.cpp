#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;
        int first = 0;
        
        string brac;
        cin >> brac;
        for (int i =  0 ; i < brac.length() ; ++i){
            if (brac.at(i) == '('){
                first++;
            }    
            if (first >= 1){
                if (brac.at(i) == ')'){
                    first--;
                    n -= 2;
                }
            }
        }
            cout << n/2 << "\n";

        }
        
}
