#include <iostream>
#include <string>
using namespace std;

pair<string,bool> maxM(int m , int s){
    string ans = "";
    
    while (m > 0){
        if (s >= 9){
            ans = ans + "9";
            s -= 9 ;
        }
        else if (s <= 8){
            ans = ans + to_string(s);
            s = 0;
        }
        m--;
    }

    return {ans, (s == 0 && m == 0)};
}

pair<string,bool> minM(int m , int s){
    string ans = "1";
    s--;
    m--;
    while (m > 0){
        
        ans = ans + "0";
        m--;
    }
    int lgt = ans.size();
    int counter = lgt-1;
    //char[] digit = {'1','2','3','4','5','6','7','8','9'};
    while (s > 0 && counter >= 0){
        if (ans[counter] == '9'){
            counter--;
        }
        else {
            ans[counter] = ans[counter] + 1;
            s--;
        }
    }

    return {ans, (s == 0 && m == 0)};
}

int main(){
    int m,s;
    cin >> m >> s;
    
    
    if (s == 0 && m > 1){
        cout << -1 << " " << -1;
    }
    else if ( m == 1 && s <= 9){
        cout << s << " " << s;
    }
    else {
        pair<string,bool> first = minM(m,s);
        pair<string,bool> second = maxM(m,s);    
        if (first.second && second.second){
            cout << first.first << " " << second.first;
        }    
        else {
            cout << -1  << " " << -1 ;
        }
    }
    
}


