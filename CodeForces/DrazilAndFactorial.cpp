#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> digitList;
    for (int i = 0 ; i < n ; ++i){
        char a;
        cin >> a;
        int digit = a - '0';
        digitList.push_back(digit); 
    }
    vector<int> possDigits;
    for (auto x : digitList){
        if (x == 2 || x == 3 || x == 5 || x == 7){
            possDigits.push_back(x);
        }
        else if (x == 4){
            possDigits.push_back(2);
            possDigits.push_back(2);
            possDigits.push_back(3);
        }
        else if (x == 6){
            possDigits.push_back(3);
            possDigits.push_back(5);
        }
        else if (x == 8){
            possDigits.push_back(2);
            possDigits.push_back(2);
            possDigits.push_back(2);
            possDigits.push_back(7);
          
        }
        else if (x == 9){
            possDigits.push_back(3);
            possDigits.push_back(3);
            possDigits.push_back(2);
            possDigits.push_back(7);
           
           
        }
        
        
    }

    sort(possDigits.begin(),possDigits.end());
    reverse(possDigits.begin(),possDigits.end());
    for (auto x : possDigits){
        cout << x;
    }

}