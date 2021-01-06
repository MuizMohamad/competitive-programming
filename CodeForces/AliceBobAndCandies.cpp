#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main(){
    int t;
    cin >> t;
    int maxT = t;
   
    while (t--){
        int n;
        cin >> n;
        deque<int> cand = {};
        for (int i = 0 ; i < n ; ++i){
            int tmp;
            cin >> tmp;
            cand.push_back(tmp);
        }
       
        int before = cand[0];
        int sumAlice = cand[0];
        cand.pop_front();
        int sumBob = 0;
        int moveCount = 1;

        while (!cand.empty()){
            
            int cur = 0;
            bool lalu1 = false;
            while(cur <= before && !cand.empty()){
                cur += cand.back();
                sumBob += cand.back();
                cand.pop_back();
                lalu1 = true;
            }
            if (lalu1){
                moveCount++;
            }
                
            
            bool lalu2 = false;
            before = cur;
            cur = 0;
            while(cur <= before && !cand.empty()){
                cur += cand.front();
                sumAlice += cand.front();
                cand.pop_front();
                lalu2 = true;
            }
            if (lalu2){
                moveCount++;
            }
            before = cur;
                    
        }
        
        
        cout << moveCount << " " << sumAlice << " " << sumBob << "\n";
        
            
    }
}