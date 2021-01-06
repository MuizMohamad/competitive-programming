#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main(){
    
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;

        set<char> allInt;

        int sp = 0;
        int fp = 0;
        int minLength = 2000001;
        int maxAll = 0;
        
        while ( fp < s.size() ){
            while(allInt.size()<3 && fp < s.size()){
                allInt.insert(s[fp]);
                fp++;
            }
            int size = allInt.size();
            maxAll = max(maxAll,size);

            if (size == 3){
                int first = sp;
                int last = fp-1;
              
                set<char> test = {};
                while (test.size() < 3){
                    
                    test.insert(s[last]);
                    last--;
                    
                }
                minLength = min(minLength,fp-last-1);
            }
            
            sp = fp-2;
     
            allInt = {s[sp],s[sp+1]};
        }
       
        if (s.size() <= 2 || maxAll <= 2){
            cout << 0 << "\n";
        }
        else {
           
           cout << minLength << "\n";
        }
    }
}
