#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int countSetBits(long long n) 
{ 
    long long count = 0; 
    while (n) { 
        count += n & 1; 
        n >>= 1; 
    } 
    return count; 
}

int main(){

    int n,m,k;
    vector<int> num;
    
    cin >> n >> m >> k;

    for (int i = 0 ; i < m ; ++i ){
        int tmp;
        cin >> tmp;
        num.push_back(tmp);
    }
    int player;
    cin >> player;
    
    int counter = 0;
    for (int i = 0 ; i < m ; ++i){
        //cout << "test:" << (player ^ num.at(i)) << "\n";
        if (countSetBits(player ^ num.at(i)) <= k){
            counter++;
        }
    }
    cout <<counter;

}