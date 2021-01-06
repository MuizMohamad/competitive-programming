#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string,int> data;

    int n;
    cin >> n;
    while(n--){
        string tmp;
        cin >> tmp;
        if (!data.count(tmp)){
            data.insert({tmp,0});
            cout << "OK" << "\n";
        }
        else {
            data[tmp]++;
            cout << tmp + to_string(data[tmp]) << "\n";
        }
    }
}