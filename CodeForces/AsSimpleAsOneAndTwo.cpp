#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

string one = "one";
string two = "two";
string twone = "twone";

void solve(string s){

    int i = 0;

    int oneIndex = 0;
    int twoIndex = 0;
    int threeIndex = 0;

    int wordNum = 0;
    int numOfthree = 0;
    set<int> index = {};

    while(i < s.size()){
        
        bool foundTwoOne = false;
        if (s[i] == twone[threeIndex]){
            if (threeIndex == twone.size()-1){
                numOfthree++;
                threeIndex = 0;
                index.insert(i-1);
                index.erase(i);
                index.erase(i-2);
                foundTwoOne = true;
            }
            else {
                threeIndex++;
            }
        }
        else {
            threeIndex = 0;
            if (s[i] == twone[threeIndex]){
                if (threeIndex == twone.size()-1){
                    numOfthree++;
                    threeIndex = 0;
                    
                    index.insert(i-1);
                    index.erase(i);
                    index.erase(i-2);
                    foundTwoOne = true;
                }
                else {
                    threeIndex++;
                }
            }
        }

        if(s[i] == one[oneIndex]){
            if (oneIndex == one.size()-1){
                wordNum++;
                oneIndex = 0;
                if (foundTwoOne == false) index.insert(i);
            }
            else {
                oneIndex++;
            }
        }
        else {
            oneIndex = 0;
            if(s[i] == one[oneIndex]){
                    if (oneIndex == one.size()-1){
                        wordNum++;
                        oneIndex = 0;
                        if (foundTwoOne == false) index.insert(i);
                    }
                    else {
                        oneIndex++;
                    }
            }
        }

        if(s[i] == two[twoIndex]){
            if (twoIndex == two.size()-1){
                wordNum++;
                twoIndex = 0;
                index.insert(i);
            }
            else {
                twoIndex++;
            }
        }
        else {
            twoIndex = 0;
            if(s[i] == two[twoIndex]){
                if (twoIndex == two.size()-1){
                    wordNum++;
                    twoIndex = 0;
                    index.insert(i);
                }
                else {
                    twoIndex++;
                }
            }
        }
        i++;
    }
   
    cout << wordNum - numOfthree << endl;
    for (int x : index) cout << x << " ";

}

int main(){

    int n;
    cin >> n;
    while(n--){

        string s;

        cin >> s;

        solve(s);
    }
    

}