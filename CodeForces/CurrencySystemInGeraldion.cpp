#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> num;
    while (n--){
        int a;
        cin >> a;
        num.push_back(a);
    }

    if (find(num.begin(),num.end(),1) != num.end()){
        cout << -1 ;
    }
    else{
        cout << 1;
    }
}
