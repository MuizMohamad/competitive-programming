#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int tmp;
    cin >> tmp;
    n--;
    int bef = tmp;
    long long count = 0;
    while(n--){
        cin >> tmp;
        if (tmp < bef){
            count += (bef-tmp);
            tmp = bef;
        }
        bef = tmp;
    
    }
        
        

    cout << count ;
}