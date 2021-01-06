#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int copyK = k;

    vector<int> vecs;
    int num[100000];
    for (int j = 0 ; j < n ; j++){
        num[j] = j+1;
    }
    for (int i = 0 ; i < n ; i++){
        if (i == 0){
            vecs.push_back(1);
        }
        else if (k > 0){
            if(i % 2 == 1){
                vecs.push_back(vecs.at(i-1)+k);
            }
            else {
                vecs.push_back(vecs.at(i-1)-k);
            }
            k--;
        }
        else {
            vecs.push_back(num[i]);
        }

    }
        
        
    

    for (auto x :vecs){
        cout << x << " ";
    }
}