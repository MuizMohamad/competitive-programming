#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> pile;
    vector<long long> prefix;
    long long sum = 0;
    while(n--){
        int tmp;
        cin >> tmp;
        sum += tmp;
        prefix.push_back(sum);
        pile.push_back(sum);
    }

    int m;
    cin >> m;
    vector<int> queries;
    while(m--){
        int q;
        cin >> q;
        queries.push_back(q);
    }
    
    for (auto x : queries){
        int left = 0 ;
        int right = prefix.size()-1;
        int index = 0;
        while(left <= right){
            int mid = left + (right-left)/2;

            if (x <= prefix[mid]){
                index = mid+1;
                right = mid-1;
            }
            else {
                left = mid+1;
            }
        }
        cout <<  index << "\n";
    }
    
}