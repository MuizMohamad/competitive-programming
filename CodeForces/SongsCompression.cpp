#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int copyN = n;
    vector<int> songsDif;
    long long sumB = 0;
    long long sumA = 0;
    while (n--){
        int a,b;
        cin >> a >> b;
        songsDif.push_back(a-b);
        sumB += b;
        sumA += a;
    }

    if (sumB > m){
        cout << -1;
    }
    else {
        
        if (sumB == m){
            cout << copyN;
        }
        
        else {
            int counter = 0;
            sort(songsDif.begin(),songsDif.end());
            while (sumB <= m && counter < copyN){
                sumB += songsDif.at(counter);
                
                if (sumB > m){
                    cout << copyN - (counter);
                    return 0;
                }

                else {
                    
                    counter++;
                    
                }
            }
            
            cout << copyN - counter;
            
        }
        
    }
}