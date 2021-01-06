#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    string s1;
    string s2;

    cin >> s1;
    cin >> s2;
    int pos = 0;
    for (int i = 0 ; i < s1.size() ; ++i){
        if (s1[i] == '+'){
            pos++;
        }
        else {
            pos--;
        }
    }

    int qMark = 0;
    
    int pos2 = 0 ;
    for (int i = 0 ; i < s2.size(); ++i){
        if (s2[i] == '?'){
            qMark++;
        }
        else if (s2[i] == '+'){
            pos2++;
        }
        else {
            pos2--;
        }
    }
    //int total = s2.size();
    //cout << pos << " " << pos2 << " " << qMark << endl;
    int need = pos - pos2;
    int num = 0;
    for (int mask = 0 ; mask < (1 << qMark) ; mask++){
        int sum = 0;
        for (int i = 0 ; i < qMark ; ++i){
            if (mask & (1 << i)){
                sum++;
            }
            else {
                sum--;
            }
        }

        if (sum == need){
            num++;
        }
    }
    std::cout << std::setprecision(12);
   // cout << num << endl;
    double ans = num*(1.0)/(pow(2,qMark));
    if (need == 0 && qMark == 0){
        cout << 1.0;
    }
    else {
        cout << ans ;
    }
    
}