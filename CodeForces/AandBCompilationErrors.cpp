#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> initial;
    vector<int> second;
    vector<int> third;
    vector<int> ans;
    vector<int> ans2;


    for (int i = 0 ; i < n ; ++i){
        int tmp;
        cin >> tmp;
        initial.push_back(tmp);

    }

    for (int i = 0 ; i < n-1 ; ++i){
        int tmp;
        cin >> tmp;
        second.push_back(tmp);

    }

    for (int i = 0 ; i < n-2 ; ++i){
        int tmp;
        cin >> tmp;
        third.push_back(tmp);

    }
    sort(initial.begin(),initial.end());
    sort(second.begin(),second.end());
    sort(third.begin(),third.end());
    set_difference(initial.begin(),initial.end(),third.begin(),third.end(),inserter(ans, ans.end()));

    auto itr1 = set_difference(initial.begin(),initial.end(),second.begin(),second.end(),std::inserter(ans, ans.begin()));
    auto itr2 = set_difference(second.begin(),second.end(),third.begin(),third.end(),std::inserter(ans2, ans2.begin()));

    cout << ans.at(0) << endl;
    cout << ans2.at(0)<< endl;

    

   
}