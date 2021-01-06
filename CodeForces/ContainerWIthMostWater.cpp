#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& height) {
        int n = height.size();
        int end = n-1;
        int start = 0;
        int chosenHeight;
        if (height[start] > height[end]){
                chosenHeight = height[end];
            }
            else{
                chosenHeight = height[start];
        }
        
        int curMaxArea = end*(chosenHeight);
        while (start < end){
                
            while (height[start] <= height[end] && start < end){
                cout << "ikan";
                if (height[start] > height[end]){
                        chosenHeight = height[end];
                }
                else{
                        chosenHeight = height[start];
                }

                curMaxArea = max(curMaxArea,(end-start)*(chosenHeight));
                start++;
            }
            while (height[end] <= height[start] && start < end){
                cout << "ayam";
                if (height[start] > height[end]){
                        chosenHeight = height[end];
                }
                else{
                        chosenHeight = height[start];
                }

                curMaxArea = max(curMaxArea,(end-start)*(chosenHeight));
                end--;
            }
        
        }
       
        
        
        return curMaxArea;
    }

int main(){
    int n;
    cin >> n ;
    vector<int> s;

    while (n--){
        int tmp;
        cin >> tmp;
        s.push_back(tmp);
    }

    int test = maxArea(s);
}