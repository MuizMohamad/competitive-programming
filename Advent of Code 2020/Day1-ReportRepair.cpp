#include <iostream>
#include <vector>

using namespace std;

vector<int> inputs;

int solve(){
    for (int i = 0 ; i < 200 ; ++i){
        for (int j = 0 ; j < 200 ; ++j){
            for (int k = 0; k < 200 ; ++k){
                if (inputs[i] + inputs[j] + inputs[k] == 2020){
                    return inputs[i]*inputs[j]*inputs[k];
                }
            }
            
        }
    }
}

int main(){

    int n = 200;
    
    while (n--){
        int tmp;
        cin >> tmp;
        inputs.push_back(tmp);
    }

    cout << solve();


}