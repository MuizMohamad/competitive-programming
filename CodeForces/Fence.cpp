#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n,k;
    cin >> n >> k;
    int sum = 0;
    int minS = 100000000;
    int counter = k;
    vector<int> height;
    int index = 1;
    for (int i = 0 ; i < n ; ++i){
        int tmp;
        cin >> tmp;
        height.push_back(tmp);
        if (counter >= 1){
            sum += tmp;
            counter--;
        }
        else {
            sum = sum + tmp - height.at(i-k);
            //counter++;
        }
        //cout << minS << " " << "sum : " << sum << " " << "i = " << i << "\n";
        if (minS > sum){
            index = i+2-k;

        }
        if(counter == 0){
             minS = min(sum,minS);
        }
       
    }
        
    cout << index;
}