#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,l;
    cin >> n >> l;
    vector<int> lanterns;
    bool gotZero = false;
    bool gotL = false;
    while (n--){
        int tmp;
        cin >> tmp;
        if (tmp == 0){
            gotZero = true;
        }
        if (tmp == l) {
            gotL = true;
        }
        lanterns.push_back(tmp);
    }

    sort(lanterns.begin(),lanterns.end());
    int size = lanterns.size();
    cout<< fixed;
    if (gotZero && gotL){
        double maxD = 0.0;
        for (int i = 1 ; i < size  ;++i){
            maxD = max((lanterns.at(i) - lanterns.at(i-1))/2.0, maxD);
        }
        cout << maxD;
    }
    else  if (gotZero && !gotL){
        double maxD = l - lanterns.at(size-1) ;
        for (int i = 1 ; i < size ;++i){
            maxD = max((lanterns.at(i) - lanterns.at(i-1))/2.0, maxD);
        }
        
        
        cout << maxD;
        
            
    }

     else  if (!gotZero && gotL){
        double maxD =  lanterns.at(0) ;
        for (int i = 1 ; i < size ;++i){
            maxD = max((lanterns.at(i) - lanterns.at(i-1))/2.0, maxD);
        }
        
        cout << maxD;
        
            
    }
    else {
        double maxD =  max( lanterns.at(0) , l - lanterns.at(size-1)) ;
        for (int i = 1 ; i < size ;++i){
            maxD = max((lanterns.at(i) - lanterns.at(i-1))/2.0, maxD);
        }
        
        cout << maxD;
        
    }
}