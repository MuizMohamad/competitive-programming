#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return 1;
        int i = 0;
        int counter = 1;
        for (int j = 1; j < nums.size(); j++) {
            
            
            if (nums[j] == nums[i]) {
                counter++;
              
            }
            else {
                if (counter >= 2){
                    nums[i+1] = nums[i];
                    i += 2;
                }
                else {
                    i++;
                }
                
                nums[i] = nums[j];
                counter = 1;
            }
            
            if (j == nums.size() - 1){
                if (counter >= 2){
                    i++;
                    nums[i] = nums[j];
                }
            }
        }
        return i+1;

}

int main(){
    int n;
    cin >> n;
    vector<int> nums;

    while (n--){
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }

    int length = removeDuplicates(nums);

    for (int i = 0 ; i < length ; ++i){
        cout << nums[i] << " ";
    }

}