#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();

    int maxCount = 1;
    char bef = s[0];
    int count = 1;
    for (int i = 1; i < n ; ++i){
        if (s[i] == bef){
            count++;
            maxCount = max(maxCount,count);
        }
        else {
            bef = s[i];
            count = 1;
        }
    }

    cout << maxCount;

    return 0;
    
}