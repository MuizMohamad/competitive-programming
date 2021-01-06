#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,x;
        cin >> n >> x;
        vector<int> nums = {};
        int odds = 0;
        int evens = 0;
        while(n--){
            int tmp;
            cin >> tmp;
            if (tmp % 2 == 0){
                evens++;
            }
            else {
                odds++;                                                            
            }
            nums.push_back(tmp);
        }
      

        if (odds == 0){
            cout << "No" << "\n";
        }
        else {
            odds = min(x,odds);
            if (odds % 2 == 0){
                odds--;
            }
            int need = x - odds;
            if (need <= evens){
                cout << "Yes" << "\n";
            }
            else{
                cout << "No" << "\n";
            }
        }
        
       
    }
}