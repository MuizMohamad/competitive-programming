#include <iostream>
#include <string>

using namespace std;

int main(){

    string s;
    cin >> s;
    string checkStr = "";
    for ( int i = 0 ; i < s.length() ; ++i ){

        if(checkStr == "" && s.at(i) == 'h'){
            checkStr.push_back('h');
        }
        else if(checkStr == "h" && s.at(i) == 'e'){
            checkStr.push_back('e');
        }
        else if(checkStr == "he" && s.at(i) == 'l'){
            checkStr.push_back('l');
        }
        else if(checkStr == "hel" && s.at(i) == 'l'){
            checkStr.push_back('l');
        }
        else if(checkStr == "hell" && s.at(i) == 'o'){
            checkStr.push_back('o');
        }

        
    }

    if (checkStr == "hello"){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}