#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> num;
    while(n--){

        int tmp;
        cin >> tmp;

        num.push_back(tmp);
    }

    sort(num.begin(),num.end());
    int distinct = 1;
    int counter = 1;
    int maxCounter = 1;
    int Nth = num.at(0);
    for (int i = 1 ; i < num.size() ; ++i){
        if (Nth == num.at(i)){
            counter++;
            maxCounter = max(maxCounter,counter);
        }
        else{
            Nth = num.at(i);
            counter = 1;
            distinct++;
        }
    }

    cout << maxCounter << " " << distinct;
}