#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    
    vector<int> ns;

    for (int i = 0; i < n ; i++){
        int tmp;
        cin >> tmp;
        ns.push_back(tmp);
    }

    int a,b;
    cin >> a >> b;

    int sum = 0;
    for (int j = a ; j <= b; j++){
        sum += ns[j];
    }

    cout << sum;
}