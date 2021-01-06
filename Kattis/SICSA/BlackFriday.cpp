#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector<pair<int,int>> count = {{1,0},{2,0},{3,0},{4,0},{5,0},{6,0}};
vector<int> player = {};
int main(){

    int n;
    cin >> n;

    for (int i = 0 ; i < n ; ++i){
        int tmp;
        cin >> tmp;
        player.push_back(tmp);

        int countIndex = 0;
        pair<int,int> test = count[countIndex];
        while(test.first != tmp){
            countIndex++;
            test = count[countIndex];
        }

        count[countIndex].second = count[countIndex].second + 1;
      
    }

    int j = 5;

    bool found = false;
    int ans = 0;
    while(!found){
        pair<int,int> test = count[j];
        if (test.second == 1) {
            ans = test.first;
            found = true;
            break;
        }
        else j--;
    }

    if (ans != 0){
        for (int i = 0; i < n ; ++i){
            if (player[i] == ans) {
                cout << i+1;
                break;
            }
        }
    }
    else {
        cout << "none";
    }
}

