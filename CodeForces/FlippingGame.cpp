#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    vector<int> num;
    cin >> n;
  
    while (n--){
        int tmp;
        cin >> tmp;
        num.push_back(tmp);
        
    }

    int firstIndex = 0;
    int secondIndex = 0;

    int maxS = 0;
    pair<pair<int,int>,int> ans = {{0,0},0};
    for (int i = 0 ; i < num.size() ; ++i){

        for (int j = i ; j < num.size() ; ++j){
            int o = 0;
            int z = 0;
            //cout << "subarray : "; 
            for (int k = i ; k <= j ; ++k ){
                if (num[k] == 1){
                    o++;
                }
                else {
                    z++;
                }
                
                //cout << num[k] << " ";
            }
            //cout << endl;
            int score = z -o;   
            //cout << score << endl;
           // int score = z -o;   
            if (score > maxS){
                ans = {{i,j},score};
                maxS = score;
                //cout << "test " << i << " " << j << endl;
            }
            
            //cout << "maxS : " << maxS << endl;
        }
    }
    int realOne = 0;
    int realZero = 0;
   for (int i = 0 ; i < num.size() ; ++i){
       if (i >= ans.first.first && i <= ans.first.second){
           if (num[i] == 0){
               realZero++;
           }
       }
       else if (num[i] == 1) {
           realOne++;
     }
   }
    cout << realOne + realZero;
    
}