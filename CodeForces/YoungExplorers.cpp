#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> e;
        while(n--){
            int tmp;
            cin >> tmp;
            e.push_back(tmp);
        }
        sort(e.begin(),e.end());
        int i = 0;
        int j = e.size() - 1;
        int g = 0;
        while (i <= j){
            int ori = e[i];
            int size = ori-1;
            while (size > 0 && i <= j ){
                
                i++;
                if (ori == e[i]){
                    size--;
                }
                else{
                    size = size - 1 + (e[i] - ori);
                    ori = e[i];
                }
                
            }
            
            if (size == 0){
                g++;
            }
            
            i++;
        }

        cout << g << "\n";
    }
}