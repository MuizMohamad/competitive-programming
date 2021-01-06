#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        int cardNum = n/k;
        if (cardNum >= m || m == 0){
            ans.push_back(m);
        }
        else if ( n == k ){
            if (m == 1){
                ans.push_back(1);
            }
            else {
                ans.push_back(0);
            }
        }
        else if ( n == m ){
            ans.push_back(0);
        }
        else{
            int maxJoker = cardNum;
            m -= cardNum;
            int test = cardNum - 1;
            int secMaxJoker;
            k--;
            if (m <= cardNum && k == 1){
                ans.push_back(maxJoker - m);
            }
            else {
                int restM = m/k;
                if (m % k == 0){
                    ans.push_back(maxJoker - restM);
                }
                else {
                    ans.push_back(maxJoker - (restM + 1));
                }
                
            }
            
        }
        
    }

    for (auto x : ans){
        cout << x  << endl;
    }
}

/*
int cardNum = n/k;
        int maxJoker,secMaxJoker;
        int counter = 0;
        if ( m == 0 || n == m){
            ans.push_back(0);
        }
        else if (n == k){
            if (m == 1){
                ans.push_back(1);
            }
            else {
                ans.push_back(0);
            }
        }
        else {
            if (m > cardNum){
                maxJoker = cardNum;
            }
            else {
                maxJoker = m;
            }
            counter++;
            int jokerLeft = m - maxJoker;
            if (jokerLeft == 0){
                ans.push_back(maxJoker);
            }
            else if (jokerLeft < cardNum){
                ans.push_back(maxJoker - jokerLeft);
            }
            else if (jokerLeft == cardNum ){
                if ( k-counter > 1)
                    ans.push_back(1);
                else {
                    ans.push_back(0);
                }
            }
            
            else {
                ans.push_back(1);
            }
        }

*/

/*
int secMaxJoker = cardNum - 1;
            int maxJoker = cardNum;
            
            for (int i = 0; i < k ;++i){
                
                if (m == 0){
                    break;
                }
                else if (i == 0){
                    m -= maxJoker;
                }
                else  if (i == k - 1 && i > 1){
                    if (m > secMaxJoker){
                        secMaxJoker = cardNum;
                    
                    }
                    m = 0;
                }
                
                else {
                    if (m < cardNum - 1){
                        secMaxJoker = m;
                    }
                    
                    m -= secMaxJoker;
                }


            }
                
               
            ans.push_back(maxJoker - secMaxJoker);
*/