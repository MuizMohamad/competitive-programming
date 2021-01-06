#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>

using namespace std;
int rangeSet(int index,vector<int> dist){
    vector<int> tmp;
    int counter = 0;
    for(int i = dist.size() - 1 ; i >= index-1 ; --i){
        auto itr = find(tmp.begin(),tmp.end(),dist.at(i));
        if(itr == tmp.end()){
            counter++;
            tmp.push_back(dist.at(i));
        }
    }

    return counter;

}


int main(){
    int n,m;
    cin >> n >> m;
    vector<int> dist;
    
    while (n--){
        int tmp;
        cin >> tmp;
        
        dist.push_back(tmp);
    }
  
   
    set<int> tmp;
    int counter = 0;
    deque<int> ans;
    for(int i = dist.size() - 1 ; i >= 0 ; --i){
        auto itr = tmp.find(dist.at(i));
        if(itr == tmp.end()){
            counter++;
            tmp.insert(dist.at(i));
        }
        ans.push_front(counter);
    }

    
    
    while (m--){
        int index;
        cin >> index;
        cout << ans.at(index-1)<< "\n";
    }
}