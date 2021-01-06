#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        vector<int> person = {};
        for (int i = 0 ; i < n ; ++i){
            int tmp;
            cin >> tmp;
            person.push_back(tmp);
        }
        if (n == 1){
            cout  << 0 << "\n";
        }
        else if (n == 2 || n == 3){
            cout  << 1 << "\n";
        }
        else {
            sort(person.begin(),person.end());
            int minS = person[0]+person[1];
            int maxS = person[n-1]+person[n-2];

            int maxCount = 0;
            for (int i = minS ; i <= maxS ; ++i){
                int left = 0;
                int right = n-1;
                int count = 0;
                while (left < right){
                    int sum = person[left] + person[right];
                    
                    if (sum == i && (left != right)){
                        count++;
                        left++;
                        right--;
                    }
                    else if (sum < i){
                        left++;
                    }
                    else {
                        right--;
                    }
                }
                
                maxCount = max(maxCount,count);
            }

            cout << maxCount << "\n";
        }
        
    }
}