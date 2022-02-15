#include <functional>
#include <queue>
#include <vector>
#include <iostream>
#include <map>
#include <assert.h>
#include <math.h>

using namespace std;

template<typename T>
void print_queue(T q) { // NB: pass by value so the print uses a copy
    while(!q.empty()) {
        std::cout << q.top() << ' ';
        q.pop();
    }
    std::cout << '\n';
}

int main(){


    int t;
    cin >> t;
    
    // if (t == 9709){
    //     for (int h = 0 ; h < t ; h++){
    //         int n,W;
    //         cin >> n >> W;

    //         priority_queue<int> q;
    //         map<int,vector<int>> index;

    //         for(int i = 1; i <= n;i++){
    //             int tmp;
    //             cin >> tmp;
                
    //             q.push(tmp);
    //             index[tmp].push_back(i);        
    //         } 

    //         if (h == 1022) {
    //             print_queue(q);
    //             cout << "WHY " << n << " " << W;
                
    //         }
    //         int sumWeight = 0;
    //         int itemCount = 0;

    //         vector<int> taken_index;
        
    //         while(!q.empty() && sumWeight < ceil(W/2.0)){
    //             //cout << "ayam" << sumWeight << "\n"; 
    //             int cur_item = q.top();
    //             if (cur_item + sumWeight <= W){
                    
    //                 int size_vect = index[cur_item].size();
    //                 int last_index = index[cur_item][size_vect-1];

    //                 taken_index.push_back(last_index);

    //                 index[cur_item].pop_back();
    //                 itemCount++;

    //                 sumWeight += cur_item;
    //             }

    //             q.pop();
    //         }
    
    //         // if (sumWeight < floor(W/2.0) || itemCount == 0) cout << "-1" << "\n";
    //         // else {

    //         //     cout << itemCount << "\n";
    //         //     for (int ind : taken_index){
    //         //         cout << ind << " ";
    //         //     }
    //         //     cout << "\n";
    //         // }
            
    //     }
    // }
    // else{
    for (int h = 0 ; h < t ; h++){
        long long n,W;
        cin >> n >> W;

        priority_queue<long long> q;
        map<long long,vector<long long>> index;

        for(long long i = 1; i <= n;i++){
            long long tmp;
            cin >> tmp;
            
            q.push(tmp);
            index[tmp].push_back(i);        
        } 

        long long sumWeight = 0;
        long long itemCount = 0;

        vector<long long> taken_index;
      
        while(!q.empty() && sumWeight < ceil(W/2.0)){
            //cout << "ayam" << sumWeight << "\n"; 
            long long cur_item = q.top();
            if (cur_item + sumWeight <= W){
                
                long long size_vect = index[cur_item].size();
                long long last_index = index[cur_item][size_vect-1];

                taken_index.push_back(last_index);

                index[cur_item].pop_back();
                itemCount++;

                sumWeight += cur_item;
            }

            q.pop();
        }
        
        if (sumWeight < ceil(W/2.0) || itemCount == 0) cout << "-1" << "\n";
        else {

            cout << itemCount << "\n";
            for (long long ind : taken_index){
                cout << ind << " ";
            }
            cout << "\n";
        }
        
    }
    
    
    
}