#include <iostream>
#include <string>
#include <locale>

using namespace std;
int main(){
    
    locale lc;
    string str;
    cin >> str;
    string newStr = "";
    for (int i = 0 ; i < str.length() ; ++i){
        if (tolower(str.at(i)) != 'a' && tolower(str.at(i)) != 'e' && tolower(str.at(i)) != 'i' && tolower(str.at(i)) != 'o' && tolower(str.at(i)) != 'u' 
            && tolower(str.at(i)) != 'y'){
                char lower = (char) tolower(str.at(i),lc);
                
                newStr += ".";
                newStr.push_back(lower);
        }
    }

    std::cout << newStr;


}