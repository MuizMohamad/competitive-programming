#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){

    string str;
    cin >> str;
    bool caps = true;
    if (islower(str.at(0))){
        for (int i = 1 ; i < str.length() ; ++i ){
            caps = caps && isupper(str.at(i));
        }
    }
    else{
        for (int i = 0 ; i < str.length() ; ++i ){
            caps = caps && isupper(str.at(i));
        }
    }
    string newStr = "";

    if (caps){
        
        for (int i = 0 ; i < str.length() ; ++i ){
            if (isupper(str.at(i)) )
                newStr.push_back(tolower(str.at(i)));
            else if (islower(str.at(i)) )
                newStr.push_back(toupper(str.at(i)));
        }
        cout << newStr;
    }
    else{
        cout<< str;
    }
}