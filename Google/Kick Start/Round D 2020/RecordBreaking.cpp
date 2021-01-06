#include <iostream>
#include <vector>

using namespace std;


bool checkMore2(int index,vector<int> test){
    if (index == test.size() - 1){
        return true;
    }
    else {
        return test[index] > test[index+1] ;
    }
}
int main(){
    int t;
    cin >> t;
    vector<int> day;
    vector<int> maxD;
    for(int j = 1; j <= t; ++j){
        int n;
        cin >> n;
        
        n--;
        int tmp;
        cin >> tmp;
        int maxd = tmp;
        int count = 0;
        int before = tmp;

        bool more = true;
        
        int copyN = n;

        while(n--){
        
            cin >> tmp;
          
            if (tmp > maxd){
                
                more = true;
                
                
            }
            else {
                if (tmp < before && more){
                    count++;
                }
                
                more = false;
            }
           

            if (n == 0 && more){
                count++;
            }
            maxd = max(maxd,tmp);
            before = tmp;
            
        }
        
        
        cout << "Case #" << j << ": " << count << "\n";
    }
        
      
}