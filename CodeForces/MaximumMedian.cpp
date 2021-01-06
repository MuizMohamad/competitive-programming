#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> num;
    int copyN = n;
    while (n--){
        int tmp;
        cin >> tmp;
        num.push_back(tmp);
    }

    sort(num.begin(),num.end());
    int medInd = copyN/2;
    int median = num[medInd];
    while (k > 0){
        int equalCounter = 0;
        int i = medInd+1;
        while (num[i] == num[medInd]){
            equalCounter++;
            i++;
        }
        k -= (1 + equalCounter);
        
        if (k >= 0){
            
            for(int j = medInd ; j <= medInd + equalCounter ; j++){
                num[j] += 1;
            } 
        }
        
        
    }

    
    cout << num[medInd];
    
}