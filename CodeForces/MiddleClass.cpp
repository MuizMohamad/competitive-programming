#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> num;
    while (t--){

        int n,x;
        cin >> n >> x;
        long long sum = 0;
        num.clear();
        while (n--){
            int a;
            cin >> a;
            num.push_back(a);
            sum += a;
        }
        
        if (sum/num.size()  >= x){
            cout << num.size() << "\n";
        }
        else {
            sort(num.begin(),num.end());
            int size = num.size()-1;
            int counter = 0;
            
            while(size > 0){
                sum -= num.at(counter);
                
                if (sum/size >= x){
                    break;
                }
                else{
                    counter++;
                    size--;
                }
            }
            cout << size << "\n";
        }

    }
}