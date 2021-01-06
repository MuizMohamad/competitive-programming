#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int m,n;
vector<pair<int,pair<int,int>>> assistant;
vector<vector<int>> balk;

bool good(int x){
    int balloonsBlowed = 0;
    vector<int> balEach = {};
    for (auto a : assistant){

        int t = a.first;
        int z = a.second.first;
        int y = a.second.second;

        int init = 0;
        int bal = 0;
        int totalBal = 0;
        bool lastIsRest = false;

        while (init <= x){
            if (bal < z){
                if (init + t <= x){
                    init += t;
                    bal++;
                    totalBal++;
                    lastIsRest = false;
                }
                else{
                    break;
                }
                
            }
            else {
                lastIsRest = true;
                init += y;
                bal = 0;
            }
            
        }
        if (init <= x || (init - y <= x && lastIsRest)){
            balloonsBlowed += totalBal;
            balEach.push_back(totalBal);
        }
        else{
            balEach.push_back(0);
        }
    }
    if(balloonsBlowed >= m){
        balk.push_back(balEach);
    }
    return balloonsBlowed >= m;
   
}

int main(){
    cin >> m >> n;

    for( int i = 0 ; i < n ; ++i){
        int tmp1,tmp2,tmp3;

        cin >> tmp1 >> tmp2 >> tmp3;
        assistant.push_back({tmp1,{tmp2,tmp3}});
    }
    
    int left = 0; //maintain left is bad
    int right = 1000000; // maintain right is good

    while (!(right == left + 1)){
        int mid = left + (right-left)/2;

        if (good(mid) == true) right = mid;
        else if (good(mid) == false) left = mid;
    }
    if (m == 0){
        cout << 0 << "\n";
        while (n--){
            cout << 0 << " ";
        }
    }
    else{
        cout << right << "\n";
        int test = balk.size();

        int sumB = 0;
        for (auto b : balk[test-1]){
            if (sumB+b <= m){
                cout << b << " ";
                sumB += b;
            }
            else {
                cout << m-sumB << "\n";
                sumB = m; 
            }
            
        }
            
    }
   

}