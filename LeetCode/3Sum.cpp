#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<set<int>> test;
        int n = nums.size();
        for (int i = 0 ; i < n-1 ; ++i){
            int first = nums[i];
            int start = i+1;
            int end = n-1;
            cout << "ikan" << endl;
            while(start < end){
                cout << "ayam" << endl;
                int second = nums[start];
                int third = nums[end];
                int sum = first + second + third;
                if (sum == 0){
                    if (!test.count({first,second,third})){
                        ans.push_back({first,second,third});
                        test.insert({first,second,third});
                    }
                    start++;
                    while(second == nums[start]){
                        start++;
                    }
                    end--;
                    while (third == nums[end]){
                        end--;
                    }
                    
                }
                
                else if (sum > 0){
                    end--;
                }
                else {
                    start++;
                }
            }
        }
        
        return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    while(n--){
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }

    vector<vector<int>> ans = threeSum(nums);

    for (auto x: ans){
        for (auto y : x){
            cout << y << " ";
        }
        cout << "\n";
    }
}