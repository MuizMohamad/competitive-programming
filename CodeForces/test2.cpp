#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool behindZeros(string str){
    bool result = true;
    for (int i =  1; i < str.length() ; ++i){
        result = result && str.at(i) == '0' ;
    }
    return result;
}

int main(){
    int t;
    cin >> t;
    vector<string> results;
    for (int i = 0 ; i < t; ++i){
        int n;
        cin >> n;
        string str;
        cin >> str;
        string newStr = str;
        bool clean = false;
        bool clean2 = false;
        int j = 1;
        int reset;
        if (n >= 2){

            while (!clean){

                if (adjacent_find(newStr.begin()+1, newStr.end() , [](char x,char y){if (x == '1'){return y == '0';} else { return false;}}) == newStr.end()){
                    clean = true;
                }
                else {
                     newStr.erase(adjacent_find(newStr.begin() +1, newStr.end() , [](char x,char y){ if (x == '1'){return y == '0';} else { return false;}}));
                }
               
            }

            while (!clean2){

                if (adjacent_find(newStr.begin(), newStr.end() , [](char x,char y){if (x == '1'){return y == '0';} else { return false;}}) == newStr.end() ){
                    clean2 = true;
                }
                else if (newStr.length() > 3){
                    newStr.erase(adjacent_find(newStr.begin() , newStr.end() , [](char x,char y){ if (x == '1'){return y == '0';} else { return false;}}) + 1 );
                }
                else if (newStr.length() == 3){
                    if (newStr.at(2) == '1'){
                     newStr.erase(adjacent_find(newStr.begin() , newStr.end() , [](char x,char y){ if (x == '1'){return y == '0';} else { return false;}}) );
                    }
                    else {
                    newStr.erase(adjacent_find(newStr.begin() , newStr.end() , [](char x,char y){ if (x == '1'){return y == '0';} else { return false;}}) + 1 );
                }
                }
                else {
                    newStr.erase(adjacent_find(newStr.begin() , newStr.end() , [](char x,char y){ if (x == '1'){return y == '0';} else { return false;}}) );
                }
               
            }
            /*
            if (str.at(0) == '0' ){
                
                newStr = "0" +  newStr;
            }
            else if (str.at(0) == '1'){
                newStr = "1" + newStr;
                
                if (behindZeros(newStr)){
                    newStr = "0";
                }
            }
            */
            results.push_back(newStr);
        }
        else {
            results.push_back(str);
        }
        
        
        }
    
    for (auto x : results){
        cout << x << endl;
    }
        

}